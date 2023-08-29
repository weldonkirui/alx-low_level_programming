#include "main.h"

/**
 * _memcpy - function that copy memory
 * @src: source memory
 * @dest: destination memory
 * @n: number of byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; n > i ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
