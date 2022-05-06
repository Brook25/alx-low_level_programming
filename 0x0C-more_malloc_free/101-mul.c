#include <stdlib.h>
#include <stdio.h>
/**
 * main - function muultiplies two numbers
 * @argc: argument count
 * @argv: vector
 * Return: int
 */
int main(int argc, char *argv[])
{
unsigned long mun;
int a, b;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] > 57 || argv[a][b] < 48)
{
printf("Error\n");
exit(98);
}
}
}
mun = atol(argv[1]) *atol(argv[2]);
printf("%lu\n", mun);
return (0);
}
