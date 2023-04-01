#include "main.h"

/**
 * Entry - point
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return: Always 0;
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
