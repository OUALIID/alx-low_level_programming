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
	unsigned int j;
	unsigned int f;
	unsigned int i;
	unsigned int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
		;
	for (f = 0; s2[f] != '\0'; f++)
		;
	if (n > f)
		n = f;
	p = (char *)malloc((j + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	j = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	for (a = 0; a < n && s2[a] != '\0'; a++)
	{
		p[i] = s2[a];
		i++;
	}
	p[i] = '\0';
	return (p);
}
