#include <stdio.h>

/**
 * main - entry point
 * description: 'prints all the numbers of base 16 in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar(n + '0');
		} else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
