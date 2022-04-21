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
int add = 0, i, j, ln1, ln2;
for (ln1 = 0; n1[ln1]; ln1++)
;
for (ln2 = 0; n2[ln2]; ln2++)
;
if (ln1 > size_r || ln2 > size_r)
return (0);
ln1--;
ln2--;
size_r--;
for (i = 0; i < size_r; i++, ln1--, ln2--)
{
if (ln1 >= 0)
add += n1[ln1] - '0';
if (ln2 >= 0)
add += n2[ln2] - '0';
if (ln1 < 0 && ln2 < 0 && add == 0)
break;
r[i] = add % 10 + '0';
add /= 10;
}
r[i] = '\0';
if (ln1 >= 0 || ln2 >= 0 || add) 
return (0);
for (i--, j = 0; i > j; i--, j++)
{
add = r[i];
r[i] = r[j];
r[j] = add;
}
return (r);
}

