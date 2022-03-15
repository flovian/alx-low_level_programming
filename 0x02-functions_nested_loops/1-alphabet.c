#include "main.h"

/**
 * main - Print alphabet in lower-case
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
