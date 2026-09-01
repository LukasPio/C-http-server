#include <sys/socket.h>
#include <netinet/ip.h>
#include <netinet/in.h>
#include <errno.h>
#include <stdio.h>

int main()
{
    int s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (listen(s, 1))
    {
        perror(errno);
        exit(errno);
    }

    return 0;
}