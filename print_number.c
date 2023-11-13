#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: length of digit.
 */

int print_number(int n)
{
	int digit_len = 0, m, count;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		m = -n;
		digit_len++;
	}
	else
		m = n;

	count = 1;
	while (m / count > 9)
		count *= 10;

	while (count > 0)
	{
		_putchar((m / count) + '0');
		digit_len++;
		m %= count;
		count /= 10;
	}

	return (digit_len);
}
