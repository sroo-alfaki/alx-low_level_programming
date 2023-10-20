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
 * print_listint - function that prints all the elements of a list_t list.
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_list(const listint_t *h)

{
	if (h == NULL)
		printf("(nil)");
	else
	{
		while (h != NULL)
		{
			printf("[%d]%s\n",  _strlen(h->str), h->str);
			*h = h->next;
		}

	}
}
