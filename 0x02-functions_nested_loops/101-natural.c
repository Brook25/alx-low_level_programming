#include "stdio.h"

/**
 * main - prints all the multiples of 3 or 5
 *
 * Return: Always 0
 */
int main(void)
{
int i, res;

for (i = 0; 1 < 1024; i++)
if (i % 3 == 0 || i % 5 ==0)
res += i;
printf("%d\n", res);
return (0);
}
