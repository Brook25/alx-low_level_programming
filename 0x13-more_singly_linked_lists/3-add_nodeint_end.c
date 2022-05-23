#include "lists.h"
/**
 * add_nodeint_end - add new node at the end of linked list
 * @head: head of list
 * @n: n elements
 *
 * Return: pointer to the new element. or Null if fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *n_ew;
listint_t *tmp;
(void)tmp;
n_ew = malloc(sizeof(listint_t));
if (n_ew == NULL)
return (NULL);
n_ew->n = n;
n_ew->next = NULL;
tmp = *head;
if (*head == NULL)
{
*head = n_ew;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = n_ew;
}
return (*head);
}
