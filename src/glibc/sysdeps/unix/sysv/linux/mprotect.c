#include <sys/mman.h>
#include <errno.h>
#include <sysdep.h>
#include <asm/unistd.h>  /* For Linux syscall numbers */

int
__mprotect (void *addr, size_t len, int prot)
{
  return INLINE_SYSCALL_CALL (mprotect, addr, len, prot);
}
libc_hidden_def (__mprotect)
weak_alias (__mprotect, mprotect)
