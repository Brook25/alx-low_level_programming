#include "main.h"

/**
 *infinite_add - add two numbers.
 *
 *@n1: first number.
 *@n2: second number.
 *@r: result.
 *@size_r: result size.
 *Return: the addition of n1 and n2.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int add = 0, length1, length2, j, k;

	for (length1 = 0; n1[length1]; length1++)
	;
	for (length2 = 0; n2[length2]; length2++)
	;
	if (length1 > size_r || length2 > size_r)
		return (0);
	length1--;
	length2--;
	size_r--;
	for (j = 0; j < size_r; j++, length1--, length2--)
	{
		if (length1 >= 0)
			add += n1[length1] - '0';
		if (length2 >= 0)
			add += n2[length2] - '0';
		if (length1 < 0 && length2 < 0 && add == 0)
			break;
		r[j] = add % 10 + '0';
		add /= 10;
	}
	r[j] = '\0';
	if (length1 >= 0 || length2 >= 0 || add)
		return (0);
	for (j--, k = 0; j > k; j--, k++)
	{
		add = r[j];
		r[j] = r[k];
		r[k] = add;
	}
	return (r);
}
