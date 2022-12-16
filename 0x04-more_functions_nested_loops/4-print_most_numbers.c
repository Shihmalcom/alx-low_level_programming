#include "main.h"

/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9
 * Do not print 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i >= 0; i <= 10; i++)
	{
		for (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
}