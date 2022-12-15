#include <linux/kernel.h> 
#include <linux/uaccess.h> 
#include <linux/slab.h> 
#include <linux/sched.h> 
#include <asm/uaccess.h> 
#include <linux/syscalls.h> 

SYSCALL_DEFINE1(sowmyaprint,char *,string) 
{ 
        char kstring[256]; 
        long x=strncpy_from_user(kstring,string,256); 
        printk("The string passed to sys_sowmyaprint system call is %s\n",kstring); 
        //char kstring2[512]; 
        //int y=copy_from_user(kstring2,(char *)string,512); 
        //printk("The string passed to sys_sowmyaprint system call is %s\n",kstring2); 
        return 0; 
} 
