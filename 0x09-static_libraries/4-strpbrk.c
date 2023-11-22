#include "main.h"

/**
 *  _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s :the string
 * @accept : that matches one of the bytes
 *
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *a;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				a = &s[i];
				return (a);
			}
			j++;
		}
		i++;
	}
	return (0);
}
