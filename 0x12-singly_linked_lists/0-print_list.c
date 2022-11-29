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
	int j;

	j = 0;
	i = 0;
	while (h->next != NULL)
	{
		j++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			printf("[%d] ", h->len);
			j++;
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
			j++;
		}
		h = h->next;
		printf("\n");
		i++;
	}
	return (j);
}
