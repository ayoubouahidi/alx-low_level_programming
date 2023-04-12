#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array
 * @size : size of array
 * @c : char
 * Return: pointer of array and char
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
