#include "main.h"
/*
 * _strlen - returns string length
 * @s: string
 * Return: Always 0
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

