#include "main.c"
#include <stdio.h>

/**
 * _strcat - appends strings
 * @src - is a variable
 * @dest - is a variable
 * Return: 0
 */


char *_strcat(char *dest, char #src)
{

	
	

	for (int a = 0; dest[a] != '\0'; a++)
	{
	while (src[b] != '\0')
	{
		dest[a] = dest[a] + src[b];
		b++;
	}


	}
	dest[a] = '\0';

	return (dest);

}
