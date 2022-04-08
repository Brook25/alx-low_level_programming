#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: return 0
 */
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("positive");
}
else if (n = 0)
{
printf("%d", 0);
}
else
{
printf("negative");
}
return (0)
}
