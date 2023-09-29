#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 *@s : string
 * Return: value i
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
		i = (i + _strlen_recursion(s + 1)) + 1;
	return (i);
}
