#include "main.h"
#include <unistd.h>
/**
 * _putchar - the prints a character
 * @c: input
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
