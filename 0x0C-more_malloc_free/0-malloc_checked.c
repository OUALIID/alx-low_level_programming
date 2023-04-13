#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory dynamically using malloc
 * @a: The function takes one input argument
 * Return: A pointer pointed to an empty type.
 */

void *malloc_checked(unsigned int a)
{
	int *p;

	p = (void *)malloc(a);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
