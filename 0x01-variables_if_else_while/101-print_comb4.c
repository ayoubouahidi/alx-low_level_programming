#include<stdio.h>

/**
 * main - Entry point
 * description: prints in three combonation
 * Return: Always 0
 */

int main(void)

{
	int n;
	int m;
	int z;

	for (n = 48; n <= 55; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			for (z = 50; z <= 57; z++)
			{
				putchar(n);
				putchar(m);
				putchar(z);

				if (n != 55 || m != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
