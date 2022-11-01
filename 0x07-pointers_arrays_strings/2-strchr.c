#include "main.h"

/**
 * _strchr - this function locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: Null
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return ('\0');
}
