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

char getchar() {
	return (char)syscall(SYSCALL_GETCHAR, 0, 0, 0, 0, 0);
}

void clear() {
	syscall(SYSCALL_CLEAR, 0, 0, 0, 0, 0);
}

int input(char *buf, int len) {
	return syscall(SYSCALL_INPUT, (int)buf, len, 0, 0, 0);
}