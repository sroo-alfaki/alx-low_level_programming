#include "main.h"
/**
 * memset -  function that fills memory with a constant byte.
 *
 * @s : bytes of the memory area pointed
 * @b : the constant byte
 * @n :  function fills the firs
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
