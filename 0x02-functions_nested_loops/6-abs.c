#include "main.h"
/**
 * _abs - computes absolute intergers
 * @b: parameter to be checked
 * Return: always b
 */
int _abs(int b)
{
	if (b >0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
