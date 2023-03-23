#include "main.h"
/**
* print_last_digit - print last digit
* @i: parameter
* Return: r
*/
int print_last_digit(int i)
{
	int  r;

	r = i % 10;
	if (i < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}

