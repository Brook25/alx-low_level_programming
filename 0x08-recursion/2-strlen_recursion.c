#include "main.h"
/**
 * _strlen_recursion - function returns length of string
 * @s: stirng
 * Return: length
 */

int i;
int _strlen_recursion(char *s)
{
if (*s == '\0')
return;
s++;
i++;
_strlen_recursion(s);
return(i);
}
