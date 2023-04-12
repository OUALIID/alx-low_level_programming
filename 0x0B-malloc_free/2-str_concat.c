#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Defines a block of code
 * @s1: Input strings to be joined
 * @s2: Input strings to be joined
 * Return: Here we depend on the Condition
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *p;
	int len1;
	int len2;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < len1; j++)
	{
		p[j] = s1[j];
	}
	for (i = 0; i < len2; i++)
	{
		p[j + i] = s2[i];
	}
	p[j + i] = '\0';
	return (p);
}
