#include "monty.h"

#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *s1;
	s1 = "pall";
	printf("%d\n", strcmp(s1, argv[1]));

	return (0);
}
