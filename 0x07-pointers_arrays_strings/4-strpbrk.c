#include "main.h"

/**
 * *_strpbrk()- function that searches a string for any of a set of bytes.
 *
 * @s :the string
 * @accept : that matches one of the bytes
 *
 * Return : pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *a;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accpet[j] != '\0)
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
