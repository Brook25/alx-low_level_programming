#include <stdlib.h>
/**
 *malloc_checked - function allocates memory with malloc
 *@b: bytes
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
void *s;

s = malloc(b);
if (s == NULL)
exit(98);
else
return (s);
}
