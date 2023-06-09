#include "main.h"
#include <string.h>
/**
*_strspn - a function that gets the length of a prefix substring
*@s: string to search
*@accept: prefix to measure
*Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (i);
}
