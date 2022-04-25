#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints
 * all the elements of a listint_t list
 * @h: points to the head of the listint_t list
 *
 * Return: The number of nodes in the list_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
