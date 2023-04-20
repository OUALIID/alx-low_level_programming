#include "variadic_functions.h"

/**
 * print_numbers - the name of the function being defined
 * @separator:  string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return:  the function returns an integer value of 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
