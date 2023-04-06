#include "main.h"

/**
 * _div - Check if a given number is divisible by a given dividend
 *
 * @n: the number to be checked for divisibility
 * @i: The divisor we must check
 *
 * Return:  Here we depend on the situation
 */

int _div(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (n / 2 == i)
		return (1);
	i++;
	return (_div(n, i));
}

/**
 * is_prime_number - checks whether a given number is prime or not
 *@n: the integer to be checked for primality
 *
 * Return: Here we depend on the situation
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (_div(n, i));
}
