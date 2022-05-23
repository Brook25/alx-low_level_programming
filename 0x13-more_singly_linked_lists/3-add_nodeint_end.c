#include "lists.h"
/**
 * add_nodeint_add - add new node at the end of linked list
 * @head: head of list
 * @n: n elements
 *
 * Return: pointer to the new element. or Null if fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nnew;
listint_t *tmp;
(void)tmp;
nnew = malloc(sizeof(listint_t));
if (nnew == NULL)
return (NULL);
nnew->n = n;
nnew->next = NULL;
tmp = *head;
if (*head == NULL)
{
*head = nnew;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = nnew
}
return (*head);
}
