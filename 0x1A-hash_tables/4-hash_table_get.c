#include "hash_tables.h"
/**
 * hash_table_get - gets the value at a certain key in a hashtable
 * @ht: pointer to a hashtable
 * @key: key to search the value with
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
int index = key_index((const unsigned char *) key, ht->size);
hash_node_t *temp = ht->array[index];

if (ht == NULL || strlen(key) == 0)
	return (NULL);

while (temp != NULL && strcmp(temp->key, key) != 0)
	temp = temp->next;

if (temp)
return(temp->value);

return (NULL);
}
