#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
