#include "main.h"
/**
 * main - the entry point
 * @argc: is a rguments
 * @argv: is a rguments
 * Return: the return is always 0
*/
int main(int argc, char *argv[])
{
	int rd, wr, i, j, k;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rd = open(argv[1], O_RDONLY);
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(rd, buffer, BUFSIZ)) > 0)
	{
		if (wr < 0 || write(wr, buffer, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(rd);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(rd);
	k = close(wr);
	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rd);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wr);
		exit(100);
	}
	return (0);
}
