#include "main.h"
#include <stddef.h>
/**
*_strcpy - copy string pointed to by src
*@src: parameter
*@dest: parameter
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
