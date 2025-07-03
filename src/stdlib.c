#include <syscall.h>
#include <stdlib.h>

void exit(int status) {
	syscall(SYSCALL_EXIT, status, 0, 0, 0, 0);
	while (1); // fallback if syscall doesn't kill the process
}

void sleep(int ms) {
	syscall(SYSCALL_SLEEP, ms, 0, 0, 0, 0);
}