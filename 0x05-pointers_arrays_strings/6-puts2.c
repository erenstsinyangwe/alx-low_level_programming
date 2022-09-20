#include "main.h"
#include <string.h>
/**
*puts2 - a function that prints every other c
*haracter of a string, starting with the
*first character, followed by a new line
*
*@str: parameter str
*
*
*/
void puts2(char *str)
{
	int len, i, j;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		j = str[i];
		if (j % 2 != 0)
		{
			continue;
		}
		else
			_putchar(j);
	}
	_putchar('\n');

}
