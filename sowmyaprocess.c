#include <linux/kernel.h> 
#include <linux/cred.h> 
#include <linux/sched.h> 
#include <linux/syscalls.h> 

asmlinkage long sys_sowmyaprocess(void) 
{ 
        struct task_struct *cur=current; 
        printk("The process id of the current process is %d\n",cur->pid); 
        printk("The process id of the parent process of the current process is %d\n",cur->parent->pid); 
        printk("The process id of the real parent of the current process id %d\n",cur->real_parent->pid); 
        return 0; 
} 
