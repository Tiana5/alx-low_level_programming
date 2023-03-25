#include "main.h"
/**
*print_diagonal - print a diagonal line
*@n: numbers of times to be printed
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				for (j == i)
					_putchar('\\');
					else if (j < i)
					-putchar(' ');
			}
			_putchar('\n');
		}
	}
}
