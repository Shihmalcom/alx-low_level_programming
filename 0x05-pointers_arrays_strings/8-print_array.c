#include "main.h"

/**
 * print_array -  function that prints n elements of an array of integers
 * @a: input elements
 * @n: input elements
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int k = 0;

	for (k = 0; k < n; k++)
	{
		printf("%d", *(a + k));
		if (k != (n - 1))
			printf(", ");
	}
	printf('\n');
}
