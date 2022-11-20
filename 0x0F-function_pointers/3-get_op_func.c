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
	int i;

	i = 0;
	while (i < 6)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
