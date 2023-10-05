i#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int value
 * @height: int value
 * Return: two array
 */

int **alloc_grid(int width, int height)
{
	int **t, i, j;

	t = malloc(sizeof(*t) * height);

	if (width <= 0 || height <= 0 || t == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			t = malloc(sizeof(**t) * width);
			if (t[i] == 0)
			{
				while (i--)
					free(t[i]);
				free(t);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				t[i][j] = 0;
	}
	return (t);
}
