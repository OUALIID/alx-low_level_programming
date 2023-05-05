#include "main.h"
/**
* print_binary - that prints the binary representation of a number.
* @n: is the number of the Input
*/
void print_binary(unsigned long int n)
{
	unsigned long int len;
	int i, j = 0;

	for (i = 63; i >= 0; i--)
	{
		len = n >> i;
		if (len & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (j == 0)
		_putchar('0');
}
