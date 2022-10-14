#include <stdio.h>

/**
 * main - print alphabets in reverse form
 *
 * Return: Always 0.
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a' ; lower++)
		putchar(lower);

	putchar('\n');

	return (0);
}
