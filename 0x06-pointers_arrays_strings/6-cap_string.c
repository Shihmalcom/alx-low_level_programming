#include "main.h"

/**
 * cap_string -  function that capitalizes all words of a string
 * @str: string to capitalized
 *
 * Return: pointer to the changed string
 */
char *cap_string(char *str)
{
	int ze = 0;

	while (str[ze])
	{
		while (!(str[ze] >= 'a' && str[ze] <= 'z'))
			ze++;
		if (str[ze - 1] == ' ' ||
				str[ze - 1] == '\t' ||
				str[ze - 1] == '\n' ||
				str[ze - 1] == ',' ||
				str[ze - 1] == ';' ||
				str[ze - 1] == '.' ||
				str[ze - 1] == '!' ||
				str[ze - 1] == '?' ||
				str[ze - 1] == '"' ||
				str[ze - 1] == '(' ||
				str[ze - 1] == ')' ||
				str[ze - 1] == '{' ||
				str[ze - 1] == '}')
			str[ze] -= 32;
	}
	return (str);
}
