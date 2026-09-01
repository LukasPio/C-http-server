compile:
	gcc \ -Wall \ -Wextra \ -Wpedantic \ -fsanitize=address,undefined \ src/*.c \ -Iinclude \ -pthread \ -o httpserver
