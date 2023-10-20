#include "lists.h"
/**
 *_strlen - function length of string
 * @n: string
 * Return: int
 */
int _strlen(char *n)
{
	int i = 0;

	if (!n)
		return (0);
	while (*n++)
		i++;
	return (i);
}

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
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		d++;
	}

	return (d);
}
