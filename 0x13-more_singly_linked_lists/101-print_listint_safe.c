#include "lists.h"
/**
 * free_listp - function frees a linked list
 * @head: head of list
 *
 * Return: nothing
 */
void free_listp(listp_t **head)
{
listp_t *tempo;
listp_t *curent;
if (head != NULL)
{
curent = *head;
while ((tempo = curent) != NULL)
{
curent = curent->next;
free(tempo);
}
*head = NULL;
}
}
/**
 * print_listint_safe - prints linked list
 * @head: head of list
 *
 * Return: num of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes = 0;
listp_t *hptr, *buff, *add;
hptr = NULL;
while (head != NULL)
{
buff = malloc(sizeof(listp_t));
if (buff == NULL)
exit(98);
buff->p = (void *)head;
buff->next = hptr;
hptr = buff;
add = hptr;
while (add->next != NULL)
{
add = add->next;
if (head == add->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_listp(&hptr);
return (nodes);
}
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nodes++;
}
free_listp(&hptr);
return (nodes);
}
