#include <stdio.h>
/**
 * main - entry number
 * Discription : 'prints digits from 0 to 9'
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
