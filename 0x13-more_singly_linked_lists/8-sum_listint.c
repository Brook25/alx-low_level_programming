#include "lists.h"
/**
 * sum_listint - returns sum of all data inside linked list
 * @head: head of list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
int add;
add = 0;
while (head != NULL)
{
add += head->n;
head = head->next;
}
return (add);
}
