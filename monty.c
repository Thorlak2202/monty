#include "monty.h"

/**
 * main - function that receives filename and opens the file
 * @argc: number of arguments
 * @argv: nam of the bytecode
 * Return: 0 when success or 1 when failure
 */
int main(int argc, char **argv)
{
    FILE *montyfile;
    char *line;
	size_t len = 0;
    unsigned int line_number = 1;
	ssize_t read;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

    montyfile = fopen(argv[1], "r");

    if (montyfile == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

    while ((read = getline(&line, &len, montyfile)) != -1)
	{
		printf ("%s", line);
		line_number++;
	}
    
    fclose(montyfile);
	return (0);
}
