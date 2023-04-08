#include "main.h"

/**
 * _memcpy - copy a specified number of bytes from
 * the src memory area to the dest memory area.
 * @dest: destination memory block
 * @src: Source memory block
 * @x: The number of bytes to copy from src to dest
 *
 * Return: We mean a destination
 */

char *_memcpy(char *dest, char *src, unsigned int x)
{
	unsigned int j;

	for (j = 0; j < x; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
