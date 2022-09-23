#include "main.h"
#include <stdio.h>

/**
 * leet - leet encoder
 * @str: string to be encoded
 * 
 * Return: result of encoded string
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}
