#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key input
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
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



int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *head;


if (ht == NULL)
	return (0);

index = key_index((const unsigned char *) key, sizeof(ht->array));

head = malloc(sizeof(hash_node_t));
	if (head == NULL)
	return (0);
head->key = (char *) key;
	if (key == NULL || key == "")
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
