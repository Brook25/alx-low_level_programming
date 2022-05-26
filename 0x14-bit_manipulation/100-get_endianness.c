#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_enidaness(void)
{
unsigned int a;
char *ch;
	a=1;
	ch = (char *) &a;

	return ((int)*ch);
}
