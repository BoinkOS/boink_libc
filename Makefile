CC = i686-elf-gcc
AR = i686-elf-ar
CFLAGS = -ffreestanding -O2 -Wall -Wextra -Iinclude

OBJS = src/syscall.o src/stdio.o src/stdlib.o

libc.a: $(OBJS)
	$(AR) rcs libc.a $(OBJS)

clean:
	rm -f $(OBJS) libc.a

prune:
	rm -f $(OBJS)