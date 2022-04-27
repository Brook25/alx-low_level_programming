#include "main.h"
/**
 * sqrNum - function does the sqr root of a number
 * @x: number input
 * @i: variable
 * Return: int
 */
int sqrNum(int x, int i)
{
if (x == (i * i))
return (i);
else if (x > (i * i))
return (sqrNum(x, i + 1));
else
return (-1);
}

/**
 * _sqrt_recursion - function returns square root of a number
 * @n: number
 * @i: variable
 * @x: number input
 * Return: int
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n == 1)
return (1);
if (n < 0)
return (-1);
return (sqrNum(n, 1));
}
