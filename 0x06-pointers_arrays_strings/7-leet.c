#include "main.h"
/**
* leet - leet
* @str: string
* Return: string
*/
char *leet(char *str)
{
	int i;
	int m;

	char *a = "aAeEoOtT1L";
	char *b = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (m = 0 ; a[m] != '\0' ; m++)
		{
			if (str[i] == a[m])
				str[i] = b[m];
		}

	}
	return (str);
}
