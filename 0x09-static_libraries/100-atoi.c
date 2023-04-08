#include "main.h"

/**
 * _atoi - Converts a string representation
 * of an integer to a real integer value
 * @s: for Input
 *
 * Return: Integer for converted
 */

int _atoi(char *s)
{
	int j;
	int sin;
	unsigned int digit;

	j = 0;
	sin = 1;
	digit = 0;
	while (s[j] != '\0')
	{
		if (s[j] == '-')
			sin *= -1;
		else if (s[j] >= '0' && s[j] <= '9')
		{
			digit = (digit * 10) + (s[j] - '0');
		}
		else if (digit > 0)
			break;
		j++;
	}
	return (digit * sin);
}
