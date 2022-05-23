#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: head of list
 *
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *a;
listint_t *z;
a = NULL;
z = NULL;
while (*head != NULL)
{
z = (*head)->next;
(*head)->next = a;
a = *head;
*head = z;
}
*head = z;
return (*head);
}
