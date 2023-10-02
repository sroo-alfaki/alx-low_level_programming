#include "main.h"
/**
 * _memcpy -  function that copies memory area
 *
 * @dest : bytes of the memory area pointed
 * @src: bytes from memory area
 * @n :  copies
 *
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
