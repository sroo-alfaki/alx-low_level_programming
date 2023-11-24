#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: int value
 * @max: int value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int a, i;
	int *s;

	if (min > max)
		return (NULL);
	a = max - min + 1;
	s = malloc(sizeof(int) * a);
	if (!s)
		return (NULL);
	for (i = 0; i < a; i++)
		s[i] = min++;
	return (s);
}
