#include "main.h"

/**
 * _puts_recursion - Prints a string that is followed by a newline
 * @s: for input.
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
