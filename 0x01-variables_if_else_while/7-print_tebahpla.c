#include <stdio.h>

/**
 * main - entry point
 * description: 'prints lowercase in reverse'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');
	return (0);
}
