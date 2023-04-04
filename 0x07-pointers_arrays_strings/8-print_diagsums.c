#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - used to print
 * the sum of the two diameters
 *
 * @s: responsible for input
 * @accept: related to the input
 */

void print_diagsums(int *a, int size)
{
	int j;
	unsigned int sm;
	unsigned int sum;

	sm = 0;
	sum = 0;
	for (j = 0; j < size; j++)
	{
		sm += a[(size * j) + j];
		sum += a[(size * (j + 1)) - (j + 1)];
	}

	printf("%d, %d\n", sm, sum);
}
