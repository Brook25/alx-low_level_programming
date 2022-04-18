#include "main.h"
/*
 * _strlen - returns string length
 * @s: string
 * Return: Always 0
 */
int _strlen(char *s)
{
int i = 1;
int j = 0;
for (i = *s[0]; i++)
j+=1;
return (j);
}

