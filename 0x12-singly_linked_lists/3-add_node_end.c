#include "lists.h"
/**
 * add_node_end - function that adds new node at the end of a list
 * @head: input of pointer to a header
 * @str: Input string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nod;
	list_t *tmpo;

	nod = malloc(sizeof(list_t));
	if (nod == NULL)
		return (NULL);
	nod->len = _strlen(str);
	nod->str = strdup(str);
	nod->next = NULL;
	if (*head == NULL)
		*head = nod;
	else
	{
		tmpo = *head;
		while (tmpo->next != NULL)
			tmpo = tmp->next;
		tmpo->next = nod;
	}
	return (nod);
}

/**
 * _strlen - returns len of string
 * @s: character
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}
