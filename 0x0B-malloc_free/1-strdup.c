#include <stdlib.h>
/**
 * _strdup - duplicates string to a newly allocated space
 * @str: character pointer input
 * Return: character
 */
char *_strdup(char *str)
{
int i = 0;
int j = 0;
char *ch;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i += 1;
i += 1;
ch = malloc(sizeof(char) * i);
if (ch == NULL)
return (NULL);
while (j < i)
{
ch[j] = str[j];
j += 1;
}
return (ch);
}
