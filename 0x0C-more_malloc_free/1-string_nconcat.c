#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return:pointer shall point to a newly allocated space in memory,
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		a = malloc(x + n + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		a[i] = s2[j];
		i++;
	}
	a[i] = '\0';
	return (a);
}
