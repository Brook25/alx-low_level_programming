#include "lists.h"
/**
 * print_listint - function prints a list and returns length of list
 * h: head of the list
 * Return: length of the list
 */


size_t print_listint(const listint_t *h) {
	listint_t *temp = NULL;
	int count = 0;
	if (h) {
	printf("%d\n", h->n);
	temp = h->next;
	count += 1;
	}
	while (temp != NULL) {
		printf("%d\n", temp->n);
		temp = temp->next;
		count += 1;
	}
	return count;
}
