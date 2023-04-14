#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  That function initializes the memory to zero.
 * @nmemb: Input parameters for the function.
 * @size: Input parameters for the function.
 *
 * Return: A pointer pointed to an empty type.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < nmemb * size; j++)
	{
		p[j] = 0;
	}
	return (p);
}
