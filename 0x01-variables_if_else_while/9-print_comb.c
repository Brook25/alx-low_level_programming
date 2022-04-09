#include <stdio>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int dg;
for (dg = 40; dg <= 57; dg++)
{
putchar(dg);
if (dg == 57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
