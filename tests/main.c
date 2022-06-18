#include "monty.h"

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

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file");
		exit (EXIT_FAILURE);
	}
	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[0]);
		exit(EXIT_FAILURE);
	}
	while ((nread = getline(&line, &len, stream)) != -1)
	{
		fwrite(line, nread, 1, stdout);
	}
	free(line);
	fclose(stream);

	return (0);
} 
