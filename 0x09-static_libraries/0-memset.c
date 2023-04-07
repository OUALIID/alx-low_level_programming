#include "main.h"

/**
 * *_memset - fill  block of memory with a constant byte.
 *
 * @s: The starting memory address of the memory block to be filled
 * @a: The constant byte value that should be used to fill the memory block
 * @x: The number of bytes in a memory block
 *
 * Return: is the pointer memory area
 */

char *_memset(char *s, char a, unsigned int x)
{
	unsigned int j;

	for (j = 0; j < x; j++)
	{
		s[j] = a;
	}
	return (s);
}
