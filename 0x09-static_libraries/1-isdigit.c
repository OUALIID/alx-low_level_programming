#include "main.h"

/**
 * _isdigit - is checking for digits 0-9
 * @c: for Input
 *
 * Return: the return value will be either 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
