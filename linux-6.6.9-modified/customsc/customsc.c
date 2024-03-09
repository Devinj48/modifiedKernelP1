#include <linux/kernel.h>
#include <linux/syscalls.h>



asmlinkage long __x64_sys_customsc(void) {
	printk("This is the new system call Evan Stringer and Devin Jiang implimented.\n");
	return 0;
}




