#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name and takes a pointer to a function as an argument
 * @name: By it we mean an input name
 * @f: It is a pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
