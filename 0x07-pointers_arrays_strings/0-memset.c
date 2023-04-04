#include "main.h"

/**
 * _memset - fill a specific memory area with a fixed byte
 *
 * @s: pointer to the beginning of the memory area to be filled
 * @b: The value of the byte to be filled in the memory area
 * @n: The number of bytes to fill in the memory area
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
