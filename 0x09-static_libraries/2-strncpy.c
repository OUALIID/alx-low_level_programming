#include "main.h"

/**
 * _strncpy - Copy a specified number of characters
 * from src to dest and return the modified dest string.
 * @dest: the destination string where
 * the copied characters will be written to.
 * @src: the source string from where the characters will be read.
 * @x:  the maximum number of characters to be copied from src to dest.
 *
 * Return: modified dest series
 */

char *_strncpy(char *dest, char *src, int x)
{
	int j;

	j = 0;
	while (src[j] != '\0' && j < x)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < x)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
