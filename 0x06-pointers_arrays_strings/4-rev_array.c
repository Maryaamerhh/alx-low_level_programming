#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: content to be reversed
 * @n: number of content
 */

void reverse_array(int *a, int n)
{
	int e, f;

	for (f = n - 1; f >= n / 2; f--)
	{
		e = a[n - 1 - f];
		a[n - 1 - f] = a[f];
		a[f] = e;
	}
}
