#include "lists.h"
#include <stdio.h>
/**
 * print_list - Function prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Description: Function prints all the elements of a list_t list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *current;

	i = 0;
	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] ", current->len);
			printf("%s", current->str);
		}
		current = current->next;
		printf("\n");
		i++;
	}
	return (i);
}
