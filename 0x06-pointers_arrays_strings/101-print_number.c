#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void printf_number(int n)
{
	if (n ==-214748348)
	{
		_putchar('-');
		_putchar('2');
		print_number(14748348);
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		print_number(n);
	}
	else if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
		_putchar(n + '0');
}
