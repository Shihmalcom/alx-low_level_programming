#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: input value
 * @n: input value
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c, d;

	for (d = n - 1; d > n / 2; d--)
	{
		c = a[n - 1 - d];
		a[n - 1 - d] = a[d];
		a[d] = c;
	}
}
