#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - The function concatenates two strings
 * @s1: Character arrays index
 * @s2: Character arrays index
 * @n: variable
 * Return: A pointer pointed to an empty type.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;
	unsigned int l;
	unsigned int j;
	unsigned int q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (l = 0; s2[l] != '\0'; l++)
		;
	if (n > l)
		n = l;
	p = (char *)malloc((i + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		p[j] = s1[j];
		j++;
	}
	for (q = 0; q < n && s2[q] != '\0'; q++)
	{
		p[j] = s2[q];
		j++;
	}
	p[j] = '\0';
	return (p);
}
