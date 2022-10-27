#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: changing to
 * Return: changing from
 */
char *string_toupper(char *str)
{
	int q = 0;

	while (str[q])
	{
		if (str[q] >= 'a' && str[q] <= 'z')
			str[q] -= 32;

		q++;
	}

	return (str);
}
