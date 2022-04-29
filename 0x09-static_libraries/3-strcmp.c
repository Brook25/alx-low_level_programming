#include "main.h"
/**
 *_strcmp - compares two strings
 * @s1: A pointer to a character to be changed
 * @s2: A pointer to char to be changed
 * Return: A pointer to a char
 */
int _strcmp(char *s1, char *s2)
{
char *st_one = s1;
char *st_two = s2;
while (*st_one != '\0' && *st_two != '\0' && *st_one == *st_two)
{
st_one++;
st_two++;
}
return (*st_one - *st_two);
}
