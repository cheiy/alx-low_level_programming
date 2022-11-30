#include "lists.h"
/**
 * free_list - Function frees a list_t list
 * @head: Pointer to the head node.
 *
 * Description: Function frees a list_t list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	if (head->next == NULL)
	{
		free(head->str);
		free(head);
	}
	else
	{
		while (head != NULL)
		{
			temp_node = head->next;
			free(head->str);
			free(head);
			head = temp_node;
		}
	}
}
