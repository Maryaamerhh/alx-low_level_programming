#include "main.h"


/**
 * _strncpy - a finction a copies a string.
 * @dest: copying to.
 * @src: copying from
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cu = 0, d = 0;

	while (src[cu++])
		d++;

	for (cu = 0; src[cu] && cu < n; cu++)
		dest[cu] = src[cu];

	for (cu = d; cu < n; cu++)
		dest[cu] = '\0';

	return (dest);
}
