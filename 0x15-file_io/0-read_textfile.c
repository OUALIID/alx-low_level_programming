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
	int i;
	size_t j;
	char *s;
	size_t len;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY, 0644);
	if (i == -1)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);
	len = read(i, s, sizeof(char) * letters);
	j = 0;
	while (j < len)
	{
		write(STDOUT_FILENO, &s[j], 1);
		j++;
	}
	close(i);
	return (len);
}
