#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - It takes two input arguments
 * @size: variable  The required size of the character array
 * @c: variable  The character to be used to fill in the array
 *
 * Return: If the size is 0 the function
 * returns NULL to indicate an error.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int j;

	p = malloc(sizeof(char) * size);
	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		p[j] = c;
	}
	return (p);
}
