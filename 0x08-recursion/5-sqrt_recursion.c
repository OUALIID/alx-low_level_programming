#include "main.h"

/**
 * _sqrt - designed to calculate the square root of a number.
 * @n: the function takes an input parameter n of type "Number"
 * @i:  parameter value  that is passed into a function as input.eter
 *
 * Return: Here we depend on the situation
 */

int _sqrt(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (_sqrt(n, i));
}
