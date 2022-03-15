#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 *
 *Return: 0 Always success
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
