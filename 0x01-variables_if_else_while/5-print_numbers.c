#include<stdio.h>

/**
 * main - Entry point
 * description: printf from 0 to 9
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}