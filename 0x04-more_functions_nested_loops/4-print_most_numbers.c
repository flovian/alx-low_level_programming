#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *Apart from 2 and 4, followed by new line
 * Return: 0-9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
