#include <stdio.h>

/**
 *main - Prints the program followed by a new line
 *@argc - the count of arguments supplied to the program.
 *argv - Array of pointer string to the arguments
 *
 *Return - Always 0
 */
int main(void argc, char __attribute__((__unused__)) *argv[])
	(void)argv;
{
	printf("%d\n", argc - 1);

	return (0);
}
