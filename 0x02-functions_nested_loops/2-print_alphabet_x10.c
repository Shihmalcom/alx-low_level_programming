#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char a;
	int d;

	d = 0;
	while (d < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		d++;
		_putchar('\n');
	}
}
