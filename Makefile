CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRCS = main.c input.c

wsn_monitor: $(SRCS) common.h input.h
	$(CC) $(CFLAGS) -o $@ $(SRCS)

clean:
	rm -f wsn_monitor
