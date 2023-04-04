#include "main.h"

/**
 * _strspn - We want to get the length of the prefix substring
 *
 * @s: responsible for input
 * @accept: related to the input
 *
 * Return: depends primarily on the case
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int bytes;

	bytes = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] != ' ')
		{
			for (i = 0; accept[i] != '\0'; i++)
			{
				if (s[j] == accept[i])
					bytes++;
			}
		}
		else
			return (bytes);
	}
	return (bytes);
}
