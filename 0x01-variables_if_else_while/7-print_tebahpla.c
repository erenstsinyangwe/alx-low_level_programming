#include <stdio.h>
/**
*main - Entry point
*Decription - print the alphabet in reverse order
*Return: always 0 (success)
*/
int main(void)
{
	char limit = 'a';
	char za = 'z';

	while (za >= limit)
	{
		putchar(za);
		za--;
	}
	putchar('\n');
	return (0);
}
