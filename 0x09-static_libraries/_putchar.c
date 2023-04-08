#include <unistd.h>

/**
 * _putchar - that writes a single character
 * to the standard output (stdout) stream.
 * @c: takes a single character c as input
 * Return: If successful 1.
 * In the case of an error, we return 1, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
