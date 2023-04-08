#include "main.h"

/**
 * _strstr - We use it to locate a substring
 *
 * @haystack: for Input Substring
 * @needle: for Input string
 *
 * Return: Here we depend on the Condition
 */

char *_strstr(char *haystack, char *needle)
{
	int j;
	int i;

	if (*needle == '\0')
		return (haystack);
	for (j = 0; haystack[i] != '\0'; j++)
	{
		for (i = 0; haystack[j + i] != '\0' && haystack[j + i] == needle[i]; i++)
			continue;
		if (needle[i] == '\0')
			return (&haystack[j]);
	}
	return ('\0');
}
