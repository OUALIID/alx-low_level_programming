#include "main.h"
/**
 * flip_bits - that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: is to input number
 * @m: is to input numbers
 * Return: the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int len_1 = 0;
	unsigned long int len_2 = n ^ m;

	while (len_2)
	{
	len_1 += len_2 & 1;
	len_2 >>= 1;
	}
		return (len_1);
}
