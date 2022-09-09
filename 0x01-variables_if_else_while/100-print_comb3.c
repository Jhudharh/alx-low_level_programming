#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 38; n <= 50; n++)
	{
		for (m = 39; m <= 51; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 50 || m != 51)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
