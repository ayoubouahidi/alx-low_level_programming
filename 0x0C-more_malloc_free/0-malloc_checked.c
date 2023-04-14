#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b : bytes
 * Return: pointer allocates memory
 */

void *malloc_checked(unsigned int b)
{
	void *mlcd;

	mlcd = malloc(b);

	if (mlcd == NULL)
	{
		exit(98);
	}

	return (mlcd);
}
