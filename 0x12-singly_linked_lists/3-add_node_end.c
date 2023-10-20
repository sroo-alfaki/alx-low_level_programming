#include "lists.h"
/**
 * add_node_end -  function that adds a new node at the end of a list_t list.
 * @head: address of pointer
 * @str: node
 * Return: size
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start_head = malloc(sizeof(list_t));

	if (!head || !start_head)
		return (NULL);
	if (str)
	{
		start_head->str = strdup(str);
		if (!start_head->str)
		{
			free(start_head);
			return (NULL);
		}
		start_head->len = _strlen(start_head->str);
	}
	if (start_head)
	{
		while (start_head->next)
			start_head = start_head->next;
		start_head->next = start_head;
	}
	else
		*head = start_head;
	return (start_head);
}
