#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc -  function that allocates memory for an array, using malloc
 * @nmemb: elements
 * @size: the size of the memory to print
 *
 * Return: pointer to the allocated memory.`
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(sizeof (int) * nmemb);
	if (c == NULL)
	return (NULL);
	for (x = 0; x < (nmemb * size); x++)
	c[x] = 0;
	return (c);
}
