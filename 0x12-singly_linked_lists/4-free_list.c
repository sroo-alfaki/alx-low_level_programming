#include "lists.h"
/**
 *free_list -  function that frees a list_t list.
 * @head: pointer to head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tem

	if (head == NULL)
		return;

	while (*head)
	{
		tem = (*head)->next;
		free(head);
	}
		*head = NULL;
}
