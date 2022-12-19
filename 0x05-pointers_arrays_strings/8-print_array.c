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
	int a = 0;

	for (a = 0; a < n; a++)
	{
		printf("%d", *(a + a));
		if (a != (n - 1))
			printf(", ");
	}
	printf('\n');
}
