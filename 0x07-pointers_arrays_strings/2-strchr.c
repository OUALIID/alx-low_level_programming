#include "main.h"

/**
 * *_strchr -> Locate character in string
 *
 * @s: A pointer to a string. This is the string in which
 * we will search for the specified character.
 * @c: A character to be searched in the provided string.
 *
 * Return: Depend Condition
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
