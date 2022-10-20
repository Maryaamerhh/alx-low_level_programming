#include "main.h"

/*
 * _isdigit - a function a checks for a digit 0-9
 * @c: input
 * Return: 1 if c is a digit, otherwise return 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
