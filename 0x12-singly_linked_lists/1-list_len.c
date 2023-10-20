#include "lists.h"

/**
 *size_t list_len - function that prints all the elements of a list_t list.
 * @h: linked list of type listint_t to print
 * Return: size
 */


size_t list_len(const list_t *h)
{

	size_t d = 0;

	while (h)
	{
		*h = h->next;
		d++;
	}

	return (d);
}
