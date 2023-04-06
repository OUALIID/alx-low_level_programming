#include "main.h"

/**
 * wildcmp - Compares two strings and returns
 * a value based on whether or not they match
 * @s1: the first input string
 * @s2: the second input string
 *
 * Return: Here we depend on the situation
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s2 + 1, s1)));
	return (0);
}
