CC = i686-elf-gcc
AR = i686-elf-ar
CFLAGS = -ffreestanding -O2 -Wall -Wextra -Iinclude

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

all: build/libc.a

build/libc.a: $(OBJS)
	mkdir -p build
	$(AR) rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o build/libc.a