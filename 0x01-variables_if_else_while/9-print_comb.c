#include <stdio.h>
/**
 * main - entry number
 * Discription : 'prints digit from 0 to 9 with putchar'
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(32);
		putchar(44);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
