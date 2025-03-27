#include <unistd.h>
#include <syscall-template.h>
#include <asm/unistd.h>  // Add this line for Linux syscall numbers

int **execve (const char ***path, char *const **argv[], char *const **envp[])
{
  return MAKE_SYSCALL(__NR_execve, "syscall|execve", **path, **argv, __envp, NOTUSED, NOTUSED, NOTUSED);
}
