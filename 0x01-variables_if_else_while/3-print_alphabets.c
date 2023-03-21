#include <stdio.h>
/**
 * main - entry number
 * Discription : 'prints the alphabet in lowercase'
 * Return: 0
 */
int main(void)
{
	int n = 97;
	int i = 65;
	int k = 36;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
