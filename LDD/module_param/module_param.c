#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>

int myvalue,array_myvalue[4];
char *myname;
int cb_myvalue=0;

module_param(myvalue,int,S_IRUSR|S_IWUSR);
module_param(myname ,charp,S_IRUSR|S_IWUSR);
module_param_array(array_myvalue,int,NULL,S_IRUSR|S_IWUSR);


int notify_param(const char *val,const struct kernel_param *kp)
{
	int res=param_set_int(val,kp);
	if(res==0)
	{
		printk(KERN_INFO "call back function called\n");
		printk(KERN_INFO "new value of cb_myvalue=%d\n",cb_myvalue);
		return 0;
	}
	return -1;
}

const struct kernel_param_ops my_param_ops=
{
	.set=&notify_param,
	.get=&param_get_int,
};

static int __init hello_world_init(void)
{
	int i;
	printk(KERN_INFO "myvalue=%d\n",myvalue);
	printk(KERN_INFO "cb_myvalue=%d\n",cb_myvalue);
	printk(KERN_INFO "myname=%s\n",myname);
	for(i=0;i<(sizeof array_myvalue/sizeof (int));i++)
	{
		printk(KERN_INFO "array_myvale[%d]=%d\n",i,array_myvalue[i]);
	}
	printk(KERN_INFO "kernel module inserted successfully\n");
	return 0;
}

static void __exit hello_world_exit(void)
{
	printk(KERN_INFO "kernel module removed successfully\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("shravani");
MODULE_DESCRIPTION("module param driver");
