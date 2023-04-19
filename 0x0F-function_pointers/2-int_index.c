#include "function_pointers.h"


/**
 * int_index - find an even integer in an array "The Matrix"
 * @array: input for the array
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: The function will take some input and return the
 * index of the first element in the input data structure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) == 1)
			return (j);
	}
	return (-1);
}
