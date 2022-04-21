#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: First number.
 * @n2: second number.
 * @r: the buffer to store the result.
 * @size_r: size of buffer:
 * Return: pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int k1 = 0, k2 = 0, o, b, d1, d2, add = 0;
while (*(n1 + k1) != '\0')
k1++;
while (*(n2 + k2) != '\0')
k2++;
if (k1 >= k2)
bg = k1;
else
bg = k2;
if (size_r <= b + 1)
return (0);
r[bg + 1] = '\0';
c1--, c2--, size_r--;
d1 = *(n1 + k1) - 48, d2 = *(n2 + k2) - 48;
while (b >= 0)
{
o = d1 + d2 + add;
if (o >= 10)
add = o / 10;
else
add = 0;
if (o > 0)
*(r + b) = (o % 10) + 48;
else
*(r + b) = '0';
if (k1 > 0)
k1--, d1 = *(n1 + k1) -48;
else
d1 = 0;
if (k2 > 0)
k2--, d2 = *(n2 + k2) - 48;
else
d1 = 0;
b--, size_r--;
}
if (*(r) == '0')
return (r + 1);
else
return (r);
}

