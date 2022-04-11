#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog
 * @d: struct name
 * Return: If an element of d is NULL, print (nil) instead of
 *      this element. (if name is NULL, print Name: (nil))
 *      If d is NULL print nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age <= 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
