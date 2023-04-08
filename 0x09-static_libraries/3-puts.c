#include "main.h"

/**
 * _puts - Print a string to standard output
 *
 * @str: input parameter
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
