#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - reallocates memory block
 * @ptr: pointer to a previously allocated memory
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *sim, *new;
unsigned int i;

if (ptr != NULL)
sim = ptr;
else
{ return (malloc(new_size)); }
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{ free(ptr);
return (0); }
new = malloc(new_size);
if (new == NULL)
return (0);
for (i = 0; i < (old_size || i < new_size); i++)
{
*(new + i) = sim[i];
}
free(ptr);
return (new);
}
