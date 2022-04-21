#include "main.h"
/**
 *_strcmp - compares two strings
 * @s1: A pointer to a character to be changed
 * @s2: A pointer to char to be changed
 * Return: A pointer to a char
 */
int _strcmp(char *s1, char *s2)
{
char *string_one = s1;
char *string_two = s2;
while (*string_one != '\0' && *string_two != '\0' && *string_one == *string_two)
{
string_one++;
string_two++;
}
return (*string_one - *string_two);
}
