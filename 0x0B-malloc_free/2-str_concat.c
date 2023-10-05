#include "main.h"

/**
 * _strlen - find length
 * @a:string
 * Return: returns s
 */

int _strlen(char *a)
{
	int s = 0;

	for (s = 0; a[s] != '\0'; s++)
		;
	return (s);
}

/**
 * *str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: eturned pointer should point to a newly allocated space in memory
 * or null
 */


char *str_concat(char *s1, char *s2)
{
	int x, y, i;
	char *n;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";
	x = _strlen(s1);
	y = _strlen(s2);
	n = malloc((x + y) * sizeof(char) + 1);
	if (n == 0)
		return (0);
	for (i = 0; i <= x + y; i++)
	{
		if (i < x)
			n[i] = s1[i];
		else
			n[i] = s2[i - x];
	}
		n[i] = '\0';
		return (n);
}
