#include "main.h"
/**
*print_rev - print a string in reverse with a new line
*@s: string to be printed
*Return: 0
*/
void print_rev(char *s)
{
	int t;
	int c;

	for (t = 0 ; s[t] != '\0' ; t++)
		c++;
	for (t = c ; t >= 0 ; t--)
		_putchar(s[t]);
	_putchar('\n');
}
