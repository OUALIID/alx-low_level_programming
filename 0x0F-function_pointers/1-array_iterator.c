#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -  Apply the specified function to each element of the array
 *
 * @array: input for the array
 * @size: size of the array
 * @action:  is a pointer to a function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
