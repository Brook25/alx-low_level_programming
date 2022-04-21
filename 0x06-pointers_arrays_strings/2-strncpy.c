#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: A pointer to a char
 * @src: A pointer to a char
 * @n: vlaue
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
desti[i] = '\0';
i++;
}
return (dest)
}
