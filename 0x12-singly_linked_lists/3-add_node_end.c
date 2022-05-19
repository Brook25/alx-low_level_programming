#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list.
 * @head: head of the linked list.
 * @str: string
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn, *tmp;
	size_t newchar;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
	return (NULL);

	newn->str = strdup(str);

	for (newchar = 0; str[newchar]; newchar++)
	;

	newn->len = newchar;
	newn->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
	*head = newn;
	}
	else
	{
	while (tmp->next != NULL)
	tmp = tmp->next;
	tmp->next = newn;
	}

	return (*head);
}
