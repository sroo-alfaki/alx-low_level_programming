#include "lists.h"

/**
 *print_listint - function that prints all the elements of a list_t list.
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)

{
	if (h == NULL)
		printf("(nil)");
	else
	{
		while (h != NULL)
		{
			printf("[%d] %s\n", h->str);
			h = h->next;
		}

	}
}
