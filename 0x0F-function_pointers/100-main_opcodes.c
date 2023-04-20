#include <stdlib.h>
#include <stdio.h>

/**
 * op_codes - Print the opcodes
 * @argv: Input Address
 * @argc: Bytes Number
 */
void op_codes(char *argv, int argc)
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%.2hhx", argv[j]);
		if (j < argc - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - output the opcodes of its own main function.
 * @argc: the name of the input variable
 * @argv: the name of the input variable
 * Return: Here we depend on the situation
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	op_codes((char *) &main, i);
	return (0);
}
