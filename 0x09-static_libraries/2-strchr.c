#include "main.h"

/**
 * _strchr -> Locate character in string
 * @s: a pointer a string
 * @c: the character to search for in the string
 *
 * Return: Here we depend on the Condition
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return ('\0');
}
