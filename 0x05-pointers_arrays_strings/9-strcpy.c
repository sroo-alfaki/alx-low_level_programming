#include "main.h"

/**
 * _strcpy -  function that copies the string pointed
 * @dest: The value of pointer
 * @src :The value of pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');
	return (dest);
}
