#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: character tested
 *
 * Return: 1 if  c is a digit, 0 0therwise
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);

		return (0);
}
