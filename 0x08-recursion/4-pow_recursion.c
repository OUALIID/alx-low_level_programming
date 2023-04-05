#include "main.h"

/**
 * _pow_recursion - is a recursive function that calculates
 * the power of an integer
 *
 * @x: the base Input Number
 * @y: he exponent to which x is raised
 *
 * Return: Here we depend on the situation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
