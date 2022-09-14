#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * the int that will be used for the argument of the function
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mind_remainder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	mins_remainder = minutes % 10;
	hourse_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(mins_remainder + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
	}
}
