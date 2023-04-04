#include "main.h"

/**
 * _strpbrk - We want to get the length of the prefix substring
 *
 * @s: responsible for input
 * @accept: related to the input
 *
 * Return: depends primarily on the case
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
