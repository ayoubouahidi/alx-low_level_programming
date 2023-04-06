#include "main.h"

/**
 * prints_string - fonction like puts()
 * @s : input
 * Return : Always 0
 */

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
