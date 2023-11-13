#include "main.h"

/**
 * print_binary - prints an unsigned integer in binary format
 * @n: unsigned integer to print in binary
 * Return: number of binary digits printed
 */

int print_binary(unsigned int n)
{
	int binary_len = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n == 1)
	{
		_putchar('1');
		return (1);
	}

	binary_len += print_binary(n / 2);
	_putchar((n % 2) + '0');

	return (binary_len + 1);
}
