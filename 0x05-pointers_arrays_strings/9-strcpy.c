#include "main.h"
/**
 * _strcpy - copies string pointed by src
 * @dest: A pointer to a char
 * @src: A pointer to a char 
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (str[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
