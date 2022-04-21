#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @str: string
 * Return: returns character
 */

char *string_toupper(char *str)
{
int j;
for (j = 0; str[j] != '\0'; j++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[j] = str[j] - 32;
}
}
return (str);
}
