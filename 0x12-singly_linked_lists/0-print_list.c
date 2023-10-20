#include "lists.h"
/**
 *print_listint - function that prints all the elements of a list_t list.
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t d = 0;

	while (h)
	{
		printf("%d\n", h->n);
		d++;
		h = h->next;
	}

	return (d);
}
