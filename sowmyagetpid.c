#include <linux/kernel.h> 
#include <linux/sched.h> 
#include <linux/syscalls.h> 
asmlinkage long sys_sowmyagetpid(void) 
{ 
        int pid=task_tgid_vnr(current); 
        printk("The result of sowmyagetpid system call is %d\n",pid); 
        return (long)pid; 
} 
