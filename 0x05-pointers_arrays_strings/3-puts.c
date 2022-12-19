#include "main.h"

/**
 *  _puts - function that prints a string, followed by a new line, to stdout
 *  @str: string to stdout
 *
 *  Return: 0
 */
void _puts(char *str)
{
	int a = 0;

	for (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
