#include "main.h"

/**
 * _isdigit - function that checks for a digit 0 through 9
 * @c: tested character
 *
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 10))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
