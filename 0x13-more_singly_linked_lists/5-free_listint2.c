#include "lists.h"
/**
 * free_listint2 - frees linked list
 * @head: head of list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *tempo;
listint_t *curent;
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
