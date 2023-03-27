#include "main.h"
/**
*reset_to_98 - print pointer to an int and update value to 98
*@int: parameter
*Return: 0
*/
void reset_to_98(int *n)
{
	int *n;
	int *p;

	n = 98;
	p = &n;
	printf("Address of 'n' : %p\n", &n);
	printf("Value of 'p' : %p\n", p);
	return (0);
}
