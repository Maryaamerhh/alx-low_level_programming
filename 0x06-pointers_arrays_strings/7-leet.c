#include "main.h"

/**
 * leet - function that Encodes a string to 1337.
 * @str: be encoded.
 *
 * Return: the encoded string.
 */
char *leet(char *str)
{
	int m = 0, n;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[m])
	{
		for (n = 0; n <= 7; n++)
		{
			if (str[m] == leet[n] ||
			    str[m] - 32 == leet[n])
				str[m] = n + '0';
		}

		m++;
	}

	return (str);
}
