#include "main.h"

/**
 * wildcmp - Compares two strings and returns
 * a value based on whether or not they match
 * @s3: the first input string
 * @s4: the second input string
 *
 * Return: Here we depend on the situation
 */

int wildcmp(char *s3, char *s4)
{
	if (*s4 == '\0')
		return (*s3 == '\0');
	if (*s4 == *s3)
		return (*s3 != '\0' && wildcmp(s3 + 1, s4 + 1));
	if (*s4 == '*')
		return (wildcmp(s3, s4 + 1) || (*s3 != '\0' && wildcmp(s3 + 1, s4)));
	return (0);
}
