#include "main.h"

/**
 * rev_string -  function that prints a string
 * @s: The value of pointer
 *
 * Return: 0 always
 */
void rev_string(char *s)
{
	int e, i;
	char c;

	for (e = 0; s[e] != '\0'; ++e)
		;
	for (i = 0; i < e / 2; i++)
	{
		c = s[i];
		s[i] = s[e - 1 - i];
		s[e - 1 - i] = c;
	}
}
