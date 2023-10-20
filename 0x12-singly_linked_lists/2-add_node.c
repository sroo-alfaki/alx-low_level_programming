#include "lists.h"
/**
 **add_node - adds a new node at the beginning of a list_t list.
 * @head: address of pointer
 * @str: node
 * Return: size
 */

list_t *add_node(list_t **head, const char *str)
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
	start_head->next = *head;
	*head = start_head;
	return (start_head);
}
