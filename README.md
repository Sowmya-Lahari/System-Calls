# System-Calls
Steps to add a system call
- Download the kernel with required version.
- Extract the content of the downloaded tar file to the directory /usr/src.
- Go to the /usr/src/<kernel_version> directory.
- Do required changes and run make command to compile the kernel – sudo make.
- After compiling the kernel, install the kernel – sudo make modules_install install.
- Restart and while restarting press the shift button to get grub menu. Select the required kernel from the grub menu.

 ## Syscall addition
 - Create the directory <syscallname> in /usr/src/<kernel_version>  folder.
 - Create syscallname.c file in the directory and add the below code.
 - Create a Makefile in the same directory and add the line obj-y := syscallname.o
 - In the Makefile of the kernel folder add the name of the system call you are creating.
 - In the syscall_64.tbl file, add the entry of new system call.
 - In the syscalls.h header file, add the signature of the system call.
 - Compile the kernel.
 - Install the changes made to the kernel.
 - Restart the system.
 - Test the system call.
 - The result of the system call can be seen in kernel logs using dmesg command.
