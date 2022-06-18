#define _GNU_SOURCE
#include "monty.h"
mnt_t mnt = {NULL, NULL, NULL};

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	FILE *stream;
	char *line = NULL;
	ssize_t nread;
	size_t len = 0;
	unsigned int line_no = 1;
	stack_t *stack;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	while ((nread = getline(&line, &len, stream)) != -1)
	{
		mnt.line = line;
		mnt.file = stream;
		exec(line, &stack, line_no, stream);
		line_no++;
	}
	free(line);
	_free(stack);
	fclose(stream);

	return (0);
}
