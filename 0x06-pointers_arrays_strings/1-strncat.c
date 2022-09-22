#include "main.h"
#include <stdio.h>

/**
 * _strcat - appends strings
 * @dest - is a char variable
 * @src - is a variable
 * Return: will be void
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = dest[a] + src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
