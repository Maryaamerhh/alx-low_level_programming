#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long pf = 612852475143, v;

	while (v < (pf / 2))
	{
		if ((pf % 2) == 0)
		{
			pf /= 2;
			continue;
		}

		for (v = 3; v < (pf / 2); v += 2)
		{
			if ((pf % v) == 0)
				pf /= v;
		}
	}

	printf("%ld\n", pf);

	return (0);
}

