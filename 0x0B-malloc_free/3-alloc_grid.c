#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function for printing arrays
 * @width: Width of the array
 * @height: Height of the array
 * Return: return array or null
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **array;

	if (width == 0 || height == 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		array[a] = malloc(width * sizeof(int));
		if (array[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
				free(array[a]);
			free(array);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			array[a][b] = 0;
	}

	return (array);
}
