#include "lists.h"
/**
 *free_list -  function that frees a list_t list.
 * @head: pointer to head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *nod, *next_nod;

	if (!head)
		return;
	nod = head;
	while (nod)
	{
		next_nod = nod->next;
		free(nod->str);
		free(nod);
		nod = next_nod;
	}
}
