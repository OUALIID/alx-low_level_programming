#include <stdlib.h>
#include "main.h"

/**
 * _words - counts the number of words in a string (str).
 * @str: the Input String
 *
 * Return: The number of words in the string
 */

int _words(char *str)
{
	int j, i, si;

	i = 0;
	si = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
			si = 0;
		else if (si == 0)
		{
			si = 1;
			i++;
		}
	}
	return (i);
}
