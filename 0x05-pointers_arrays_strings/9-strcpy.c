#include "main.h"
#include <stdio.h>
/**
*_strcpy - Write a function that copies *the string pointed to by src
*@dest: This is the copia
*@src: this is the copia
*Return: this return copy
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
