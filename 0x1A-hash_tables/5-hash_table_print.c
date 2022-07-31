#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0, j = 0;
hash_node_t *temp;

if (ht == NULL)
	return;

printf("{");

while (i < ht->size)
{
	temp = ht->array[i];

	while (temp != NULL)
	{
		if (j > 0)
		printf(", ");

		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->next;
		j++;
	}
	i++;
}

printf("}\n");
}
