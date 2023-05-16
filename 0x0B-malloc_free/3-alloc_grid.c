#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - alloc grid
 * @width: width
 * @height: height
 * Return: 2D array
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = (int **) malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			while (i >= 0)
			{
				free(g[i]);
				i--;
			}
			free(g);
			return (NULL);
		}
	}
	return (g);
}
