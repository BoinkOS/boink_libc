#include <syscall.h>

int syscall(int num, int a, int b, int c, int d, int e) {
	int ret;
	asm volatile (
		"int $0x80"
		: "=a"(ret)
		: "a"(num), "b"(a), "c"(b), "d"(c), "S"(d), "D"(e)
		: "memory"
	);
	return ret;
}