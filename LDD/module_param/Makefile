obj-m+=module_param.o


KDIR=/lib/modules/$(shell uname -r)/build

all:
	make -C $(KDIR) M=$(shell pwd) modules

clear:
	make -C $(KDIR) M=$(shell pwd) clean
