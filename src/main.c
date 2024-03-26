/**
 * @author Batto
 * @brief	 Sample for demonstrating sys_init_utils.h library functionality.
 * @date 	 26.03.2024
 */

#include <zephyr/kernel.h>
#include "sys_init_utils.h"

SYS_INIT_EASY(APPLICATION, 10){
	printk("in SYS_INIT_EASY: %d\n", k_thread_priority_get(k_current_get()));
	return 0;
}

SYS_INIT_USER_NAMED(My_Func_Name, APPLICATION, 60){
	printk("in SYS_INIT_USER_NAMED: %d\n", k_thread_priority_get(k_current_get()));
	return 0;
}

void main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);
}
