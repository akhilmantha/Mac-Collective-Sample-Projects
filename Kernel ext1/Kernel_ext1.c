//
//  Kernel_ext1.c
//  Kernel ext1
//
//  Created by akhil mantha on 16/06/17.
//  Copyright © 2017 akhil mantha. All rights reserved.
//

#include <mach/mach_types.h>
#include<sys/systm.h>

kern_return_t Kernel_ext1_start(kmod_info_t * ki, void *d);
kern_return_t Kernel_ext1_stop(kmod_info_t *ki, void *d);

kern_return_t Kernel_ext1_start(kmod_info_t * ki, void *d)
{
    printf("My Kext has started. \n");
    return KERN_SUCCESS;
}

kern_return_t Kernel_ext1_stop(kmod_info_t *ki, void *d)
{
    printf("My kext has stopped. \n");
    return KERN_SUCCESS;
}

