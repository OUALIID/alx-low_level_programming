#include "main.h"

/**
 * _strspn - This function to get the length of a substring of a prefix
 * @s: The function iterates over each character in the input string
 * @accept: input a set of accepted characters
 *
 * Return: Here we depend on the Condition
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i;
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
