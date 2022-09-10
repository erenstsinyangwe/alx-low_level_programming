#include <stdio.h>
/**
*main - Entry point
*Description: print the aphlbet in lower case but without
*printing q and e
*Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
