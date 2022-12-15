#include<linux/kernel.h> 
asmlinkage long sys_sowmyahello(void) 
{ 
        printk("Message printed by sowmyahello system call: Hello Sowmya!!!"); 
        return 0; 
} 
