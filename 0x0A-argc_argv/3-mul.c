#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Specify the return type (integer)
 * @argc: input arguments
 * @argv: character pointers
 * Return: 0 The program has been implemented successfully.
 */
int main(int argc, char *argv[])
{
	int first;
	int second;
	int res;

	if (argc > 2)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		res = first * second;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
