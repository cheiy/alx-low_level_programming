#include <stdio.h>
/**
 * before_main - Function prints a statement before the main function is
 * executed.
 *
 * Description: Function prints a statement before the main fuction is
 * executed.
 *
 * Return: Nothing.
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
