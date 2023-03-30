#include "main.h"
/**
*reverse_array - array of intergers
*@n: numbers of array
*@a: array
*Return: 0
*/
void reverse_array(int *a, int n)
{
	int i;
	int m;

	for (i = 0 ; i < n-- ; i++)
	{
		m = a[i];
		a[i] = a[n];
		a[n] = m;
	}
}
