# include "main.h"
/**
 * _strspn - outputs the number of bytes of a substirng
 * @s: The string
 * @accept: substirng
 * Return: return total
 */
unisgned int _strspn(char *s, char *accept)
{
int a, b;
int count = 0;
a = 0;
while (s[a] != '\0')
{
b = 0;
while (accept[b] != '\0')
{
if (accept[b] == s[a])
{
count++;
break;
}
b++;
}
if (s[a] != accept[b])
{
break;
}
a++;
}
return (count);
}

