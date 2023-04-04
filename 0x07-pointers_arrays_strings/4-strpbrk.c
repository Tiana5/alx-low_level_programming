#include "main.h"
#include <string.h>
/**
*_strpbrk -  function that searches a string for any of a set of bytes
*@s: string to search
*@accept: string to measure
*Return:pointer to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0 ; accept[index] ; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
