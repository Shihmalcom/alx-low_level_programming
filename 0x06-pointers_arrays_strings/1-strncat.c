#include "main.h"

/**
 * _strncat - concatenates two strings
 * and does not need to be null-terminated
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0, k = 0;

	while (dest[j++])
		k++;
	for (j = 0; src[j] && j < n; j++)
		dest[k++] = src[j];
	return (dest);
}
