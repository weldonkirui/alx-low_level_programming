#include "main.h"
/**
 * _strpbrk - The main function search strings for set of byte
 *
 * @s: input string 1
 * @accept: input string 2
 *
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	for (; *s != '\0'; s++)
	{
		temp = accept;
		for (; *temp != '\0'; temp++)
		{
			if (*s == *temp)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
