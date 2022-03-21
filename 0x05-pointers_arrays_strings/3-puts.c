#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string
 * followed by a new line, to stdout
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
