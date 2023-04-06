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

/**
 * _compare -> Compare two strings to see if they match or not
 * @s: the input string to compare
 * @len: the length of the string that should be compared
 *
 * Return: Here we depend on the situation
 */


int _compare(char *s, int len)
{
	if (len < 1)
		return (1);
	if (*s == *(s + len))
	{
		s++;
		len -= 2;
		return (_compare(s, len));
	}
	return (0);
}

