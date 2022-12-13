#include <stdio.h>

/**
 * main - entry point
 * description: 'prints numbers of base 10 in singular'
 *
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
