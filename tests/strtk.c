#include "monty.h"
#include <string.h>
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *str1, *str2, *token;
	int j;

	if (argc != 3)
	{
		fprintf(stderr, "USAGE: %s string delim", argv[0]);
		exit (EXIT_FAILURE);
	}
	for (j = 1, str1 = argv[1]; ; j++, str1 = NULL)
	{
               token = strtok(str1, argv[2]);
               if (token == NULL)
		{ 
			printf("Found null\n");
                   	break;
		}
               printf("%d: %s\n", j, token);
	}

	return (0);
} 
