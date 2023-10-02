#include "main.h"

/**
 * _isalpha -  function that checks for alphabetic
 *
 * @c :  that checks input function
 *
 * Return: return 1 if 'c' if true else 0
 *	always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

