#include "lists.h"
/**
 * listint_len - returns the num of elements in a linked list
 * @h: head of list
 *
 * Return: num of nodes.
 */
size_t listint_len(const listint_t *h)
{
size_t noodes = 0;
while (h != NULL)
{
h = h->next
noodes++;
}
return (noodes);
}
