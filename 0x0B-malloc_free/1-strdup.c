#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer
 * Return: returns a pointer to a new string or NULL
 */


char *_strdup(char *str)
{
	int i = 0, s = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[s] != '\0'; s++)
		n = malloc(s * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; str[i]; i++)
			n[i] = str[i];
	}
	return (n);
}
