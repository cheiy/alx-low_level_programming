#include "main.h"
/**
 * set_string - Function sets the value of a pointer to a char.
 * @s: The pointer to a pointer to a string.
 * @to: The pointer to a char.
 *
 * Description: Function sets the value of a pointer to a char.
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
