#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_enidaness(void)
{
unsigned int a;
char *c;
	x=1;
	c=(char *) &x;

	return ((int)*c);
}
