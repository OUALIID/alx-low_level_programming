#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Create an array of integers containing
 * all values from minimum to maximum
 * @min: variable of some data type.
 * @max: variable of some data type.
 * Return: variable of some data type.
 */

int *array_range(int min, int max)
{
	int *p;
	int j;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (j = 0; j <= max - min; j++)
	{
		p[j] = min + j;
	}
	return (p);
}
