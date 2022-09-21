#include "main.c"
#include <stdio.h>

/**
 * _strcat - appends strings
 * @src - is a variable
 * @dest - is a variable
 * Return: 0
 */


char main()
{

	char src[50]= "wow its true";
	char dest[50]= "add to";


	_strcat(dest, src);

	printf("Destination String is : %s \n", dest);

	return (dest);

}
