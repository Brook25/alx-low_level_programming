#include "main.h"
/**
 * _strchr - finds a specific character in a string
 * @s:a string
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (0);
}
