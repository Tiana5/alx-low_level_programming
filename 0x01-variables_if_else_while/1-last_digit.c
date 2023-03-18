#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'Display last digit of the number'
 *
 * Return: Always o
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	o = n % 10;
	if (o > 5)
		printf("Last digit %d is %d and is greater than 5\n", n, o);
	else if (o == 0)
		printf("Last digit %d is %d and is 0\n", n, o);
	else if (o < 6 && o != 0)
	return (0);
}
