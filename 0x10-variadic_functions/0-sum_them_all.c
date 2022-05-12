#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - function returns sum of all of its parameters.
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
int sum;
unsigned int a;
if (n == 0)
return (0);
sum = 0;
va_start(nums, n);
for (a = 0; a < n; a++)
sum += va_arg(nums, int);
va_end(nums);
return (sum);
}
