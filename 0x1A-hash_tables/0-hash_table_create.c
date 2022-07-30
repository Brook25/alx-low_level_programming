#include "hash_tables.h"
/**
 * hash_table_create - function creates a hash table
 * @size: size of the array of the hash table
 *
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *hp = malloc(sizeof(hash_table_t));
	if (hp == NULL)
		return (NULL);

hp->array = malloc(sizeof(hash_node_t *) * size);
	if (hp->array == NULL)
    		return NULL;

hp->size = size;
while (i < size)
{
*(hp->array + i) = NULL;
i++;
}
return(hp);
}
