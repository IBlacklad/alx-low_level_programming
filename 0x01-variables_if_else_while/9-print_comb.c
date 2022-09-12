#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a series of numbers with commas now
 * Return: Always (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	/*	putchar(','); */

		if (i != '9')
		{

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);


}
