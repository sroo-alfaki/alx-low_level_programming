#include "lists.h"
/**
*print_listint - prints all the elements of a linked list
* @h: linked list of type listint_t to print
*Return: number
*
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h-> == NULL)
		printf("[%d] %s\n", 0,"(nil)");
		else 
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
