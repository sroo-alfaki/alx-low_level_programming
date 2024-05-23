#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t mid;

	if (array == NULL)
		return -1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid <= right; mid++)
			printf("%d%s", array[mid], mid == right ? "\n" : ", ");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return mid;

		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}
