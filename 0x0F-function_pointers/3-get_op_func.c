#include "3-calc.h"
/**
 * get_op_func - Function selects the correct function in order to perform
 * the operation asked by the user.
 * @s: Char representing the operation to perform.
 *
 * Description: Function selects the correct function in order to perform
 * the operation asked by the user.
 *
 * Return: The result of the selected operation.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	if (*s != 43 || *s != 45 || *s != 42 || *s != 47 || *s != 37)
	{
		return (NULL);
	}
	return (ops[0].f);
}
