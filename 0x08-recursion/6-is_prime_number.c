#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input number
 * @num: number input
 * @i: variable to count
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (PrimNum(n, 2));
}

/**
 * PrimNum - function that gets if num is 0 or 1
 * Return: int
 */

int PrimNum(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (PrimNum(num, i + 1));
}
