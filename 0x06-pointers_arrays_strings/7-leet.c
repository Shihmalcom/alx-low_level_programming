#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @n: input value
 *
 * Return: n
 */
char *leet(char *n)
{
	int e = 0, f;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	{
		for (f = 0; f <= 7; f++)
		{
			if (n[e] == leet[f] || n[e] - 32 == leet[f])
				n[e] = f + '0';
		}
	}
	return (n);
}
