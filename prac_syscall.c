#include "types.h"
#include "x86.h"
#include "defs.h"
#include "param.h"
#include "mmu.h"
#include "proc.h"

// Simple system call
int
my_syscall(char *str)
{
	cprintf("%s\n", str);
	return 0xABCDABCD;
}

// Warpper for my_syscall
int
sys_my_syscall(void)
{
	char *str;

	// Decode argument using argstr
	if (argstr(0, &str) < 0) return -1;

	return my_syscall(str);
}

int
sys_get_ppid(void)
{
    return myproc()->parent->pid;
}

