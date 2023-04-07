#include "main.h"

/**
 * _isupper - used to check if the character is uppercase or not.
 * @w: takes in a single character input
 *
 * Return: an integer value that either 0 or 1 basedon a  certain condition
 */

int _isupper(int w)
{
	if (w >= 'A' && w <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
