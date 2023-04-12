#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Creates a two-dimensional array of
 * integers with dimensions width and height
 * @width: input arguments, width
 * @height: input arguments, height
 * Return: Here we depend on the Condition
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int j;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		p[j] = malloc(sizeof(int) * width);
		if (p[j] == NULL)
		{
			for (i = 0; i < j; i++)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			p[j][i] = 0;
		}
	}
	return (p);
}
