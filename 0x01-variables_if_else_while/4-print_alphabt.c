#include <stdio.h>
/**
 * main - entry number
 * Discription : 'prints the alphabet except q and e in lowercase'
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
