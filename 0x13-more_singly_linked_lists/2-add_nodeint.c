#include "lists.h"
/**
 * add_nodeint - adds new node at the start of a linked list
 * @head: head of list
 * @n: n elements
 *
 * Return: address of new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *mem;
mem = malloc(sizeof(listint_t));
if (mem == NULL)
return (NULL);
mem->n = n
mem->next = *head;
*head = mem;
return (*head);
}
