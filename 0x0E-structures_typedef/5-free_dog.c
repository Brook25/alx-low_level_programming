#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function frees the allocated memory for the dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free((*d).owner);
free((*d).name);
free(d);
}
}
