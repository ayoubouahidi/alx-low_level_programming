#include "main.h"

/**
 * Entry - point
 * descriprion: concatenates two strings
 * Return: Always 0;
 */

char *_strcat(char *dest, char *src);
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (0);
}
