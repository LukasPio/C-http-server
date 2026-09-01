#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/un.h>
#include <inttypes.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void on_error(char *method);

int main()
{
    int s = socket(AF_INET, SOCK_STREAM, 0);
    if (s == -1)
        on_error("socket");

    struct sockaddr_in my_addr;
    memset(&my_addr, 0, sizeof(my_addr));

    my_addr.sin_family = AF_INET;
    my_addr.sin_port = htons(80);
    my_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(s, (struct sockaddr *)&my_addr, sizeof(my_addr) == -1))
        on_error("bind");

    if (listen(s, 1) == -1)
        on_error("listen");

    struct sockaddr_in conn_addr;  
    memset(&conn_addr, 0, sizeof(conn_addr));

    socklen_t conn_len = 0;
    
    int conn = accept(s, (struct sockaddr *)&conn_addr, &conn_len);

    const char* text = "Hello World!";

    write(conn, text, sizeof(*text));

    close(s);
    close(conn);

    return 0;
}

void on_error(char *method)
{
    char buffer[24];
    snprintf(buffer, 24, "Failed on %s", method);
    perror(buffer);
    exit(errno);
}