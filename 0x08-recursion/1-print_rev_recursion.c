#include "main.h"

/**
 * _print_rev - this function prints a string in reverse.
 * @s: The string to be returned
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
