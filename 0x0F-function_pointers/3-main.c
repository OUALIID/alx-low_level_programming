#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Responsible for outputting some kind of program.
 * @ac: Refers to the argc parameter
 * @av: Refers to the argv parameter
 * Return: Always a value of 0 to indicate successful execution of the program
 */
int main(int ac, char **av)
{
	int (*op)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(av[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op(atoi(av[1]), atoi(av[3])));
	return (0);
}
