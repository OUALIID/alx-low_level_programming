#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command-line arguments passed to the program
 * @argv: an array of pointers to strings contain the arguments
 *
 * Return: 0 its successful implementation
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int i;
	for (i = 0; i < argc ;i++)
		printf("%s\n", argv[i]);
	return (0);
}
