#include "main.h"

/**
 * _strstr - We want to get the length of the prefix substring
 *
 * @haystack: responsible for input
 * @needle: related to the input
 *
 * Return: depends primarily on the case
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i + j] != '\0' && haystack[i + j] == needle[j]; j++)
			continue;
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return
