#pragma once

#define SYSCALL_EXIT 0
#define SYSCALL_PUTCHAR 1

int syscall(int num, int a, int b, int c, int d, int e);