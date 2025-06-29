#include <syscall.h>
#include <stdio.h>

void putchar(char c) {
	syscall(SYSCALL_PUTCHAR, c, 0, 0, 0, 0);
}

void puts(const char* str) {
	while (*str) {
		putchar(*str++);
	}
}