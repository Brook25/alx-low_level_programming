#include "main.h"
/**
 * _memset - fills a memory with constant byte
 * @s: memory to be filled with byte
 * @b: constant bytes
 * @n: first n bytes
 * Return: pointer
 */
char *_memset(char *s, char b,unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s + i);
}
