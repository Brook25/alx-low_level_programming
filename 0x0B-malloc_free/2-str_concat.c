#include <stdlib.h>
/**
 * str_concat - returns pointer to a memory that contains the contents of a
 * string followed by the contents of another string
 * @s1: pointer to a string element
 * @s2: pointer to a string element
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
int i, j, k, l;
char *nul = "";
char *ch;
i = j = k = l = 0;
if (s1 == NULL)
s1 = nul;
if (s2 == NULL)
s2 = nul;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
j += 1;
ch = malloc(sizeof(char) * (i + j));
if (ch == NULL)
return (NULL);
while (s1[k] != '\0')
{
ch[k] = s1[k];
k += 1;
}

while (s2[l] != '\0')
{
ch[k] = s2[l];
l += 1;
k += 1;
}
ch[k] = '\0';
return (ch);
}
