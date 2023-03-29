#include "main.h"
/**
*_strncpy - a function that copies a string
*@strncpy: copy string
*@src: source string
*@n: input value
*@dest: destination string
*Return: destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for ( i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
