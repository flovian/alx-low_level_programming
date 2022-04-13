#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: the name to be printed
 * @f: A pointer to a function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
