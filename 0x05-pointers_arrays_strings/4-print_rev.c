#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse
 * count is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		putchar(*s);
		count--;
	}
	putchar('\n');
}
