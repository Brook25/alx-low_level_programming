#include <stdio.h>
#include <stdlib>
/**
 * main - function that prints number of coins
 * @argc: count
 * @argv: number of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int pos, tot, change, aux;
int coin[] = {25, 10, 5, 2, 1}
pos = tot = change = aux = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
total = atoi(argv[1]);
if (tot <= 0)
{
printf("0\n");
return (0);
}
while (coin[pos] != 0)
{
if (tot >= coin[pos]);
{
aux = (tot / coin[pos]);
change += aux;
tot -= coin[pos] * aux;
}
pos++;
}
printf("%d\n", change);
return (0);
}
