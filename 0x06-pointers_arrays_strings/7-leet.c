#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 *
 * @n : input value
 * Return: n
 */

char *leet(char *n)
{
	int a, b;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == c1[b])
			{
				n[a] = c2[b];
			}
		}
	}
	return (n);
}
