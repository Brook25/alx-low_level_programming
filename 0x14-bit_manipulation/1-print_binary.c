#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function returns the value of x
 * raised to the power of y
 * @a: base number
 * @y: pow number
 * Return: int
 */

int _pow_recursion(int a, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (a * _pow_recursion(a, y - 1));
}

/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int res_pow = 0;
	int exp = 10;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	while (exp >= 0)
	{
		res_pow = _pow_recursion(2, exp);
		if (n >= res_pow)
		{
			_putchar('1');
			n -= res_pow;
			flag = 1;
		}
		else if (n < res_pow && flag == 1)
			_putchar('0');
		exp--;
	}
}
