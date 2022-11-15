#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program prints the name of the file it was compiled from.
 *
 * Description: Program prints the name of the file it was compiled from.
 * Return: 0 if successful, 1 otherwise.
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
