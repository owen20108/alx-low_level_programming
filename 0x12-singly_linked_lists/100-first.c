#include <stdio.h>
void preMain(void) __attribute__ ((constructor));
/**
 * preMain - execute thecode before main function
 */
void preMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
