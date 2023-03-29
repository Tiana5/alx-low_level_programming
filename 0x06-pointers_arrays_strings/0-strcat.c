#include "main.h"
#include <stdio.h>
/**
*_strcat - a function that concatenates two strings
*@src: parameter 1
*@dest: parameter 2
*Return:a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;
	int i;

	for (i = 0; dest[i] != '\0' ; i++)
		destlength++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclength++;
	for (i = 0; i <= srclength ; i++)
		dest[destlength + i] = src[i];
	return (dest);
}
