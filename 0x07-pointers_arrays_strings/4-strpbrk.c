#include "main.h"
/**
 * _strbrk - matches a character
 * @s: The string to be checked
 * @accept: character specified
 * Return: string
 */
char *_strbrk(char *s, char *accept)
{
int i;
while (*s != '\0')
{
i = 0;
while (accept[i] != '\0')
if (*s == accept[i])
{
return (s);
}
i++;
}
s++;
}
return (0);
}
