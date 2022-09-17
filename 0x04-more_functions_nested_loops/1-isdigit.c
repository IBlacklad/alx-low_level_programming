#include "main.h"
/**
 * _isdigit - checks if its a digit or if its not
 * @c: character to check
 * Return: 1 if its a digit otherwise 0
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);

	return (0);

}
