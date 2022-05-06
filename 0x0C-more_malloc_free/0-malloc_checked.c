#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: input integer for number of bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *s;

s=malloc(b);
if (s == NULL)
{
exit(98);
}

return (s);
}
