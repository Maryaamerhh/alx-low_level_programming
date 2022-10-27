#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: concatenate to
 * @src: concatenate from
 *
 * Return: Always 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a++])
		b++;
	for (a = 0; src[a]; a++)
		dest[b++] = src[a];
	return (dest);
}

