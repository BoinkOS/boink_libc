#pragma once

#define SYSCALL_EXIT 0
#define SYSCALL_PUTCHAR 1
#define SYSCALL_GETCHAR 2
#define SYSCALL_SLEEP 3
#define SYSCALL_UPTIME 4
#define SYSCALL_INPUT 5
#define SYSCALL_CLEAR 6
#define SYSCALL_AINT 999

int syscall(int num, int a, int b, int c, int d, int e);