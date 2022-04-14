#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int b = 100;
int i;

i = 1;
while (i <= b)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
if (i < b)
printf("Buzz ");
else
printf("Buzz");
}
else
{
printf("%i ", i);
}
i++;
}
printf("\n");
return (0);
}

