#include "main.h"

/**
 * wildcmp - Compares two strings and returns
 * a value based on whether or not they match
 * @s2: the first input string
 * @s4: the second input string
 *
 * Return: Here we depend on the situation
 */

int wildcmp(char *s2, char *s4)
{
	if (*s4 == '\0')
		return (*s2 == '\0');
	if (*s4 == *s2)
		return (*s2 != '\0' && wildcmp(s2 + 1, s4 + 1));
	if (*s4 == '*')
		return (wildcmp(s2, s4 + 1) || (*s2 != '\0' && wildcmp(s4 + 1, s4)));
	return (0);
}
