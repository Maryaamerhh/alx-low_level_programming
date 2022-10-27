#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: concatenate to
 * @src: concatenate from
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;
	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];
	return (dest);
}
