#include<stdio.h>

/**
 * main - Entry point
 * description: print alphabets in lowerwcase
 * Return: Always 0
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
