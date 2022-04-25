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
st1 = s;
st2 = accept;
a = 0;
while (st1[a] != '\0')
{
b = 0;
while (st2[b] != '\0')
{
if (st2[b] == st1[a])
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

