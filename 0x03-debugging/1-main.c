#include <stdio.h>
/**
 * main - cause an infinite loop
 * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/*
 * while (i < 10)
 * {
 * Infinite loop - No variable increase
 * putchar(i);
 * }
 */
printf("Infinite loop avoided! \\o/\n");

return (0);
}
