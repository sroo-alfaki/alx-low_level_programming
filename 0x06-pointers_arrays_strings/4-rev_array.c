#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a :array
 * @n :number of elements of the array
 * Return: 0 always
 */

void reverse_array(int *a, int n)
{
	int i;
	int y;

	for (i = 0; i < n--; i++)
	{
		y = a[i];
		a[i] = a[n];
		a[n] = y;
	}
}
