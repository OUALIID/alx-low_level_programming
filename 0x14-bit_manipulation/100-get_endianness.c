#include "main.h"
/**
 * get_endianness - that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int len = 1;
	char *s = (char *) &len;
		return ((int)*s);
}
