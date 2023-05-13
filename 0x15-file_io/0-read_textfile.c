#include "main.h"
/**
 * read_textfile - that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the input file.
 * @letters: nput the number.
 * Return:  Here we depend on the Condition.
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int f;
	size_t i;
	char *p;
	size_t tmp;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY, 0644);
	if (f == -1)
		return (0);
	p = malloc(sizeof(char) * letters);
	if (p == NULL)
		return (0);
	tmp = read(f, p, sizeof(char) * letters);
	i = 0;
	while (i < tmp)
	{
		write(STDOUT_FILENO, &p[i], 1);
		i++;
	}
	close(f);
	return (tmp);
}
