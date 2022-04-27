#include "main.h"
/**
 * _sqrt_recursion - function returns square root of a number
 * @n: number input
 * @i: variable
 * @dig: number input
 * Return: int
 */
int sqrnum(int dig, int i);

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n == 1)
return (1);
if (n < 0)
return (-1);
return (sqrnum(n, 1));
}
/**
 * sqrnum - function does the sqr root of a number
 * @dig: number input
 * @i: variable
 * Return: int
 */
int sqrnum(int dig, int i)
{
if (dig == (i * i))
return (i);
else if (dig > (i * i))
return (sqrnum(dig, i + 1));
else
return (-1);
}
