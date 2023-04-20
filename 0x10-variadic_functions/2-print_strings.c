 #include <stdio.h>
 #include <stdarg.h>
 #include "variadic_functions.h"

/**
 * print_strings - prints a given number of strings
 * separated by a specified separator
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(arg, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
