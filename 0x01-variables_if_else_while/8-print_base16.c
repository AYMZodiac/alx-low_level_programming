#include <stdio.h>
/**
 * main - entry number
 * Discription : 'prints the hexadicimal base from 0 to f'
 * Return: 0
 */
int main(void)
{
	int n = 48;
	int i = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
