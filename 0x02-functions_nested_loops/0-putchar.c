#include "main.h"
/**
 * main - prints putchar
 *
 * Return: 0 - Always
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
