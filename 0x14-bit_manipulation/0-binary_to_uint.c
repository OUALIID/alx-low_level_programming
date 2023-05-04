#include "main.h"
/**
 * binary_to_uint - that converts a binary number to an unsigned int
 * @b: the input string binary
 * Return: the converted number, or 0 if
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int len = 0;

	if (b != NULL)

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] == '1')
	{
		len = (len << 1) | 1;
	}
	else if (b[i] == '0')
	{
		len <<= 1;
	}
	else
	{
	return (0);
	}
	}
	return (len);
}
