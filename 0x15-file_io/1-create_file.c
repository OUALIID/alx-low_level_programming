#include "main.h"
/**
 * create_file - that creates a file.
 * @filename: the input file.
 * @letters: nput the number.
 * Return:  Here we depend on the Condition.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, i;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(op);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	wr = write(op, text_content, i);
	if (wr < 0)
		return (-1);
        close(op);
        return (1);
}
