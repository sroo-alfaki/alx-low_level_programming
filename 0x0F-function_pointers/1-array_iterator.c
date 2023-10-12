#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function
 * @array: array
 * @size: array size
 * @action: pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && size && action)
		while (array <= e)
			action(*array++);
}
