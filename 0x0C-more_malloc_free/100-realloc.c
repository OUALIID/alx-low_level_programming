#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Modify the memory allocation of a previously
 * allocated block of memory to shrink or expand it.
 * @ptr: A pointer to the block of memory to be reallocated
 * @old_size: The current size of the memory block
 * @new_size: Represents the new size of the memory block.
 *
 * Return: Here we depend on the Condition
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int j, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (j = 0; j < max; j++)
		p[j] = oldp[j];
	free(ptr);
	return (p);
}
