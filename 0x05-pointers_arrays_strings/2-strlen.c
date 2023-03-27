#include "main.h"
/**
*_strlen - a function that returns the length of a string
*@s: string to print lenth
*Return: length of a string
*/
int _strlen(char *s)
{
	int i;
	int c = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		c++;
	}
	return (c);
}
