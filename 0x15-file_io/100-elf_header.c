#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
/**
 * main - the entry point
 * @argv: argemant1
 * @argc: argemant2
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int f;
	char *read_f = malloc(32);
	char *magic_num = "\x7f"
					  "ELF";

	if (argc != 2)
	{
		perror("arg");
		return (1);
	}
	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		perror("open");
		return (1);
	}
	if (read(f, read_f, 32) == -1)
	{
		perror("read");
		close(f);
		return (1);
	}
	if (strcmp(read_f, magic_num) == 0)
		printf("ef\n");
	else
		printf("elf\n");
	close(f);
	free(read_f);
	return (0);
}