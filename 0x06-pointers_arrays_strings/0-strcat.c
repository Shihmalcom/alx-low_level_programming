#include "main.h"

/**
 * _strcat - function appends the src string to the dest string
 * @dest: input value
 * @src: input value
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int j = 0, k = 0;

	while (dest[j++])
		k++;
	for (j = 0; src[j]; j++)
		dest[k++] = src[j];
	return (dest);
}
