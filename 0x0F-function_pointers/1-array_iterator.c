#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - Function that executes a function given as a
 * parameter on each element of an array
 * @array: The array
 * @size: size of array
 * @action: the pointer to function that executes a function to executed
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	void (*p)(int);

	p = action;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		p(array[i]);

}
