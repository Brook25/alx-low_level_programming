#include "hash_tables.h"


hash_table_t *hash_table_create(unsigned long int size);
{
hash_table_t **hp;
int i = 0;
hp = malloc(sizeof(hash_table_t *) * size);
if (hp == NULL)
    return NULL;

while (i < size)
{
*(hp + i) = NULL;
i++;
}
return(hp);
}
