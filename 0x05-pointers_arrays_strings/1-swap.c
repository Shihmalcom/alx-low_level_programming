#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: swapped values
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
