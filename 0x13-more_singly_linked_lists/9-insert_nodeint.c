#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: head of list
 * @idx: index of list where node will be added
 * @n: integer element
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *new;
listint_t *h;
h = *head;
if (idx != 0)
{
for (a = 0; a < idx - 1 && h != NULL; a++)
{
h = h->next;
}
}
if (h == NULL && idx != 0)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
}
else
{
new->next = h->next;
h->next = new
}
return (new);
}
