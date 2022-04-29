#include "main.h"
/**
 * _memcpy - copy memory area from one buffer to another
 * @dest: dest buffer to copy the memory area to
 * @src: source where copy is done from
 * @n: bytes of memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
