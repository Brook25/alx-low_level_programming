#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * of a linked list.
 * @head: head of list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *previous;
	listint_t *next;

	previous = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && previous != NULL; a++)
		{
			previous = previous->next;
		}
	}

	if (previous == NULL || (previous->next == NULL && index != 0))
	{
		return (-1);
	}

	next = previous->next;

	if (index != 0)
	{
		previous->next = next->next;
		free(next);
	}
	else
	{
		free(previous);
		*head = next;
	}

	return (1);
}
