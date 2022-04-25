#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a : array of characters
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int b, c;
b = 0;
while (b < 8)
{
b = 0;
while (b < 8)
{
_putchar (a[b][c]);
c++;
}
_putchar ('\n');
b++;
}
}
