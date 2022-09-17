#include "main.h"
/**
 * print_line - print a straight line
 * @n: printed line
 */

void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
