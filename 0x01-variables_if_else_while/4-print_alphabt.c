#include <stdio.h>
/**
 * main - entry number
 * Discription : 'prints the alphabet except q and e in lowercase'
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
		{
			if (n != 101 && n != 113)
			{
			putchar(n);
			}
		}
	putchar('\n');
	return (0);
}
