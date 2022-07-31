#include "hash_tables.h"

/**
 * __strdup - duplicates a string with malloc
 * @str: string to be duplicated
 * Return: duplicated string
 */

char *__strdup(const char *str)
{
char *str1;
int i = 0;
str1 = malloc(sizeof(str));

while (*str != '\0')
	{
	*(str1 + i) = *str;
	i++;
	str++;
	}
*(str1 + i) = '\0';

return (str1);
}



/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add the element to
 * @key: key of the element, will give the index in the array
 * @value: value of the element to store in the array
 *
 * Return: 1 on success, 0 otherwise
 */



int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *head;


if (ht == NULL)
	return (0);

index = key_index((const unsigned char *) key, ht->size);

head = malloc(sizeof(hash_node_t));
	if (head == NULL)
	return (0);
head->key = __strdup((char *) key);
	if (key == NULL)
	return (0);

head->value = __strdup(value);

	if (ht->array[index] == NULL)
	{
	(ht->array[index]) = head;
	head->next = NULL;
	}

	else
	{
	head->next = ht->array[index];
	ht->array[index] = head;
	}

return (1);
}
