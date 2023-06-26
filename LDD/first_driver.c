#include<linux/module.h>

static int __init hello_world_init(void)
{
	printk(KERN_INFO "this is my first driver\n");
	printk(KERN_INFO "module inserted successfully\n");
	return 0;
}

static void  __exit hello_world_exit(void)
{
	printk(KERN_INFO "module cleanup function\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("shravani");
MODULE_DESCRIPTION("first driver");
