#include "main.h"

/**
 * print_chessboard - to print the chessboard
 * @a: to insert a two-dimensional array
 */

void print_chessboard(char (*a)[8])
{
	int j;
	int i;

	j = 0;
	while (j < 8)
	{
		i = 0;
		while (i < 8)
		{
			_putchar (a[j][i]);
			i++;
		}
		_putchar ('\n');
		j++;
	}

}
