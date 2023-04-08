#include "main.h"

/**
 * _strpbrk - that searches a given strin for any
 * of a set of bytes specified in the second parameter.
 *
 * @s: for Input Search
 * @accept: For Input
 *
 * Return: Here we depend on the Condition
 */

char *_strpbrk(char *s, char *accept)
{
	int j;
	int i;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				return (s + j);
		}
	}
	return ('\0');
}
