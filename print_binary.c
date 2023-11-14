#include "main.h"

/**
 * print_binary - prints an unsigned integer in binary format
 * @num: unsigned integer to print in binary
 * Return: number of binary digits printed
 */

int print_binary(unsigned int num)
{
	char *str = convert_base(num, 2, false);
	int binary_len = _strlen(str);

	if (binary_len == 0)
		binary_len += _putchar('0');

	print_string(str);

	free(str);

	return (binary_len);
}
