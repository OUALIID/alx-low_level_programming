#include "main.h"
/**
 * read_textfile - that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the input file.
 * @letters: nput the number.
 * Return:  Here we depend on the Condition.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);
	buffer = (char *) malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	rd = read(op, buffer, letters);
	if (rd < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[rd] = '\0';
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);
	return (wr);
}