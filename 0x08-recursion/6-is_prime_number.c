#include "main.h"
/**
 * is_prime_number - returns 1 if integer is prime number 0 if not
 * @n: number input
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
 *
 * @num: input number
 * @i: Counter variable
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
