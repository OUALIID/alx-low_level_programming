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
	for (j = 0; s1[j] != '\0'; j++)
		;
	for (t = 0; s2[t] != '\0'; t++)
		;
	if (n > t)
		n = t;
	p = (char *)malloc((j + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	for (r = 0;  < n && s2[r] != '\0'; r++)
	{
		p[i] = s2[r];
		i++;
	}
	p[i] = '\0';
	return (p);
}
