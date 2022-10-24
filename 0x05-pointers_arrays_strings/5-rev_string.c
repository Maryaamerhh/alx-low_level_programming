#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int p, q, r;
	char a, b;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	q = p - 1;
	r = q / 2;
	while (r >= 0)
	{
		a = s[q - r];
		b = s[r];
		s[r] = a;
		s[q - r] = b;
		r--;
	}
}
