#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Specify the return type (integer)
 * @argc: input arguments
 * @argv: character pointers
 * Return: 0 The program has been implemented successfully.
 */

int main(int argc, char *argv[])
{
	int j;
	int i;
	int sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j <= argc - 1; j++)
	{
		for (i = 0; i < (int)strlen(argv[i]); i++)
		{
			if (!isdigit(argv[j][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
