#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **two_dim;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dim = malloc(sizeof(int *) * height);

	if (two_dim == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		two_dim[h_index] = malloc(sizeof(int) * width);

		if (two_dim[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(two_dim[h_index]);

			free(two_dim);
			return (NULL);
		}
	}

	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			two_dim[h_index][w_index] = 0;
	}

	return (two_dim);
}
