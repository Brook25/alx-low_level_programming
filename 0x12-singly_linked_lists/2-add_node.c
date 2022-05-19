#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *newn;
    size_t newchar;

    newn = malloc(sizeof(list_t));
    if (newn == NULL)
        return (NULL);

    newn->str = strdup(str);

    for (newchar = 0; str[newchar]; newchar++)
        ;

    newn->len = newchar;
    newn->next = *head;
    *head = newn;

    return (*head);
}
