#include <stdio.h>

/**
 *main - Prints the program followed by a new line
 *@argc - the count of arguments supplied to the program.
 *argv - Array of pointer string to the arguments
 *
 *Return - Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
