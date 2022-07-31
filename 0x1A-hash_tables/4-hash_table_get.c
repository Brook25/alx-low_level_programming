#include "hash_tables.h"
/**
 * hash_table_get - gets the value at a certain key in a hashtable
 * @ht: pointer to a hashtable
 * @key: key to search the value with
 * Return: Value if exists otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = key_index((const unsigned char *) key, ht->size);
hash_node_t *temp = ht->array[index];

if (ht == NULL || key == NULL)
	return (NULL);

while (temp != NULL && strcmp(temp->key, key) != 0)
	temp = temp->next;

if (temp)
return (temp->value);

return (NULL);
}
