#include "lists.h"
/**
 * pop_listint - deletes head of node
 * @head: head of list
 *
 * Reutrn: data of head node
 */
int pop_listint(listint_t **head)
{
int headdnode;
listint_t *h;
listint_t *current;
if (*head == NULL)
return (0);
current = *head;
headdnode = curr->n;
h = curr->next;
free(current);
*head = h;
return (headdnode);
}
