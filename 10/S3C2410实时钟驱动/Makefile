obj-m := ldm.o
$(obj-m:.o=)-objs := s3c2410-rtc.o

KERN_ROOT := /home/love/linux-2.6
TFTP_BOOT := ~/work

ccflags-y += -Wno-declaration-after-statement

all: build mv clean

build:
	make M=`pwd` -C $(KERN_ROOT) modules

mv:
	mv $(obj-m:.o=.ko) $(TFTP_BOOT)

clean:
	make M=`pwd` -C $(KERN_ROOT) clean

.PHONY: all build mv clean
