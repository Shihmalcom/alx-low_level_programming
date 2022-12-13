#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints lowercase except for e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}
	putchar('\n');
	return (0);
}
