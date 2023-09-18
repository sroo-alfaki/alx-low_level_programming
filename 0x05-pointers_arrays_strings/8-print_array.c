#include "main.h"

/**
 * print_array -  function that prints elements of an array of integers
 * @a : value of pointer
 * @n : elements of an array
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	printf("%d", *a);
	printf(" , ");
	printf("%d", *(a + 1));
	printf(" , ");
	printf("%d", *(a + 2));
	printf(" , ");
	printf("%d", *(a + 3));
	printf(" , ");
	printf("%d", *(a + 4));
}
