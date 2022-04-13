#include "stdio.h"

/**
 * main - prints all the multiples of 3 or 5
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long count,i, j, k;
i = 0;
j = 1;
for (count = 0; count < 50; count++)
{
k = i + j;
i = j;
j = k;
printf("%lu", k);
if (count == 49)
putchar('\n');
else
{
printf(", ");
}
}
return (0);
}
