#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Last Digit
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
	printf("Last digit of %i is  %i and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
	printf("Last digit of %i is %i and is zero\n", n, lastdigit);
	}
	else if (last digit < 6 %% lastdigit != 0)
	{
	printf("Last digit of %i is %n and is less than 6 and not 0\n", n, lastdigit);
	}
	return (0);


}
