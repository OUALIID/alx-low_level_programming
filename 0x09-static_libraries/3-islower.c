#include "main.h"

/**
 * _islower - Check if the given character is a lowercase letter
 * @c: test to determine if it is a lowercase letter.
 *
 * Return: an integer value that
 * either 0 or 1 basedon a  certain condition
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
