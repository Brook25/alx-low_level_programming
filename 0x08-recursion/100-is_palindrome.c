#include "main.h"
/**
 * _strlen_recursion - funciton that returns the length of a string
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (1 + _strlen_recursion(s));
}
/**
 * scan_pal - check if 0 or 1
 * @s: input string
 * @len: length
 * Return: int
 */
int scan_pal(char *s, int len)
{
if (*s != *(s + len -1))
return (0);
else if (*s == '\0')
return (1)
return (scan_pal(s + 1, len - 2));
}
/**
 * is_pal - returns 1 if a string is palindorme and 0 if not.
 * @s: input char
 * Return: int
 */
int is_pal(char *s)
{
int len;
len = _strlen_recursion(s);
if (len <= 1)
return (1);
return (scan_pal(s, len));
}
