#include "main.h"
/**
 *print_alphabet_x10 - a function that print 10 times the alphabet.
 *
 * Returns 10x a-z
 */
void print_alphabet_x10(void)
{	int x, count;
	count = 0;
	while (count < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		count++;
		_putchar('\n');
	}
}
