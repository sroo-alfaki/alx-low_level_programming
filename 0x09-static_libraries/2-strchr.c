#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 *
 * @s :  the string or NULL if the character is not found
 * @c : the first occurrence of the character
 *
 * Return: Returns a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
