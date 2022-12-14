#include "main.h"

/**
 * _abs - entry point
 * @ab: integer input
 *
 * Return: absolute value of ab
 */
int _abs(int ab)

{
	return (ab * ((ab > 0) - (ab < 0)));
}
