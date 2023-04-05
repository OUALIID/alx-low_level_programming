#include "main.h"

/**
 * _print_rev_recursion - This results in string outpu
 * entirely in the opposite direction.
 *@s: for inpu
 *
 *Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + ++);
		_putchar(*s);
	}
}
