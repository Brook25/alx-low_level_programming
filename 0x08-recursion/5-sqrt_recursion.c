#include "main.h"
/**
 * _sqrt_recursion - function returns square root of a number
 * @n: number input
 * @i: variable
 * @num: number input 
 * Return: int
 */
int sqrnum(int num, int i);

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
 * @num: number input
 * @i: variable
 * Return: int
 */
int sqrnum(int num, int i)
{
if (num == (i * i))
return (i);
else if (num > (i * i))
return (sqrnum(num, i + 1));
else
return (-1);
}
