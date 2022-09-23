#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes lowercase to uppercase
 * @str: parameter of string to be changed
 *
 * Return: return a character
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
