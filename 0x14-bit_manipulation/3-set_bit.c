#include "main.h"
/**
 * set_bit - that sets the value of a bit to 1 at a given index.
 * @n: is to input numbers
 * @index: is to input index
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = 1;
	if (index > 64)
	return (-1);
	len <<= index;
	*n = *n | len;
	return (1);
}
