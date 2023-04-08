#include "main.h"

/**
 * _strncat - append a specified number of characters from
 * the src string to the end of the dest string.
 * @dest: Its purpose is to Input the destination
 * @src: Its purpose is to Input the source
 * @x: We mean the number of items
 *
 * Return: We mean a destination
 */
char *_strncat(char *dest, char *src, int x)
{
	int j;
	int i;

	for (j = 0; dest[j] != '\0'; j++)
	{
		continue;
	}
	for (i = 0; dest[i] != '\0' && i < x; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
