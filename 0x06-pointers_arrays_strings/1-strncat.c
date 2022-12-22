#include "main.h"

/**
 * _strncat - function that uses at most n bytes from src and
 * does not need to be null-terminated
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	while (dest[j++])
		k++;
	for (j = 0; src[j] && j < n; j++)
		dest[k++] = src[j];
	return (j);
}
