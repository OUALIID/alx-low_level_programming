#include "main.h"

/**
 * factorial - Factorial account of a given number
 * @n: Describes the input parameter
 *
 * Return: Suppose it indicates status
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
