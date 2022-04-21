#include "main.h"
/**
 * cap_string - capitalize every letter in a string
 * @s:  string
 * Return: pointer to destination
 */


char *cap_string(char *s)
{
int count = 0, j;
int separ[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
if (*(s + count) >= 97 && *(s + count) <= 122)
*(s + count) = *(s + count) - 32;
count++;
while (*(s + count) != '\0')
{
for (j = 0; j < 13; j++)
{
if (*(s + count) == separ[j])
{
if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
*(s + (count + 1)) = *(s + (count + 1)) - 32;
break;
}
}
count++;
}
return (s);
}
