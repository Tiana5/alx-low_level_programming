#include "main.h"
/**
*_isupper - check for uppercase character
*@c: parameter
*Return: 0 and 1
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
