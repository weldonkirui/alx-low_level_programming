#include "main.h"

/**
 * _strchr - a function that locate a character
 * @c: input
 * @s: input string
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
