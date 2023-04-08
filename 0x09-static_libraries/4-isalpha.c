#include "main.h"

/**
 * _isalpha - Checks if the given character is an alphabet
 * @c:  for character Of _isalpha
 *
 * Return: If the character is an alphabetical letter 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
