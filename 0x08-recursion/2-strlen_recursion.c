#include "main.h"

/**
 * _strlen_recursion - used to calculate
 * the length of a string recursively.
 *
 * @s:takes a string input.
 * Return: Returns the length of the string as output.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
