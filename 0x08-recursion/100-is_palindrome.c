#include "main.h"

/**
 * _strlen - is a common C function that is used to
 * calculate the length of a given string.
 * @s: takes a string input
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen(s) + 1);
}
