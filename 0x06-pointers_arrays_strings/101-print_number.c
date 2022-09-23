#include "main.h"

/**
 * base2 - power in 2 base
 * @n: an exponent
 *
 * Return: returns 2 to power exponent
 */
int base2(int n)
{
	int base = 2;
	while (n > 0)
	{
		base *= 2;
		n--;
	}
	return (base);
}
/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int power;
	power = base2(8);
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while (n / power == 0)
			power /= 2;
		while (power >= 1)
		{
			_putchar((n / power) + '0');
			n %= power;
			power /= 2;
		}
	}
}
