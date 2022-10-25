#include "main.h"
/**
 * reset_to_98 - Changes value of the variable pointed to by the pointer argument
 * @*n: Pointer to an int
 *
 * Description: Takes in a pointer to an integer and changes the value of the variable
 * that the pointer points to to 98.
 *
 * Return: 0 always
 */
void reset_to_98(int *n)
{
	*n = 98;
}
