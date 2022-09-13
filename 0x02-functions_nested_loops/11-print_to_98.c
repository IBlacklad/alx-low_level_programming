#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - function to print abc
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int n;
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);

	}
}
