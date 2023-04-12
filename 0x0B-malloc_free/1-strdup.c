#include <stdlib.h>

/**
 * _strdup - Creates a new copy of an entry string in
 * memory and returns a pointer to the new copy
 * @str: A pointer to an input string that should be iterated into memory
 *
 * Return: Here we depend on the Condition
 */

char _strdup(char *str)
{
	char *p;
	int j;

	j = 0;

	if (str == NULL)
		return (NULL) ;
	while (str[j] != '\0')
	{
		j++;
	}
	p = malloc(j + 1);
	if (p == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		p[j] = str[j];
	}
	return (NULL);
}
