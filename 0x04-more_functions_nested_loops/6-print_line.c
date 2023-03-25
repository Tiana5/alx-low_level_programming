#include "main.h"
/**
*print_line - print a straight line in the terminal
*@n: number of lines to draw
*Return: 0
*/
void print_line(int n)
{
	int o;

	if (n < 0)
	{
	_putchar('\n');
	}
	else
	{
		for (o = 0 ; o < n ; o++)
		{
		_putchar(95);
		}
		_putchar('\n');
	}
}
