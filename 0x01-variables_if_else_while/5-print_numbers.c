#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints single digit numbers of base 10'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
