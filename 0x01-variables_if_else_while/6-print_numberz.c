#include <stdio.h>
/**
*main - Entry point
*Description-  program that prints all single
*digit numbers of base 10 starting from 0, followed by a new line.
*Return: always 0 (success)
*/
int main(void)
{
	int limit = '9';
	int num = '0';

	while (num <= limit)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
