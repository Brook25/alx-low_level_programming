#include "lists.h"
/**
 * free_listp0 - frees linked list
 * @head: head of list
 *
 * Return: nothing
 */
void free_listp0(listp_t **head)
{
listp_t *tempo;
listp_t *curr;
if (head != NULL)
{
curr = *head;
while ((tempo = curr) != NULL)
{
curr = curr->next;
free(tempo);
}
*head = NULL;
}
}

/**
 * free_listint_safe - frees linked list
 * @h: head of list
 *
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t nodes = 0;
listp_t *hptr, *buff, *add;
listint_t *curr;
hptr = NULL;
while (*h != NULL)
{
buff = malloc(sizeof(listp_t));
if (buff == NULL)
exit(98);
buff->p = (void *)*h;
buff->next = hptr;
hptr = buff;
add = hptr;
while (add->next != NULL)
{
add = add->next;
if (*h == add->p)
{
*h = NULL;
free_listp0(&hptr);
return (nodes);
}
}
curr = *h;
*h = (*h)->next;
free(curr);
nodes++;
}
*h = NULL;
free_listp0(&hptr);
return (nodes);
}
