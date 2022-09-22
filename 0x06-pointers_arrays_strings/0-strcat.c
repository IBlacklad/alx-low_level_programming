#include "main.c"
#include <stdio.h>

/**
 * _strcat - appends strings
 * @src - is a variable
 * @dest - is a variable
 * Return: dest
 */


char *_strcat(char *dest, char *src)
{
int a=0;
	
int b= 0;	

	for (int a ; dest[a] != '\0'; a++)
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
