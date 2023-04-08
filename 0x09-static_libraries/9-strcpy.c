#include "main.h"

/**
 * *_strcpy - copies a string from the input src to the output dest.
 * @dest: for empty Input
 * @src: for Input Source
 *
 * Return: Here we depend on the Condition
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
