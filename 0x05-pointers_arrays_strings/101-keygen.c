#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
char a[100];
int r, p, q;
p = 0;
q = 0;
srand(time(NULL));
while (p < 2645)
{
r = rand() % 122;
if (r > 32)
{
a[q++] = r;
a == r;
}
}
a[q++] = (2772 - p);
a[q] = '\0';
printf("%s", a);
return (0);
}
