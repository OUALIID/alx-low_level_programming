#include "main.h"

/**
 * _strcat - the src string follows the string dest
 * @dest: used to enter the destination
 * @src: considered as the input source
 *
 * Return: from the destination
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	for (j = 0; dest[j] != '\0'; j++)
	{
		continue;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
