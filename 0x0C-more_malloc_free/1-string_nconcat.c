#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string passed
 * @s2: second string passed
 * @n: number of bytes
 * Return: pointer to character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int tot1, tot2, k;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

tot1 = 0;
while (s1[tot1] != '\0')
{
tot1++;
}

tot2 = 0;
while (s2[tot2] != '\0')
{
tot2++;
}

if (n > tot2)
n = tot2;
s = malloc((tot1 + n + 1) * sizeof(char));

if (s == NULL)
return (0);

for (k = 0; k < tot1; k++)
{
s[k] = s1[k];
}

for (; k < (tot1 + n); k++)
{
s[k] = s2[k - tot1];
}
s[k] = '\0';

return (s);
}
