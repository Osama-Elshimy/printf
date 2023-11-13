#include "main.h"

/**
 * print_octal - prints an unsigned number
 * @num: number to be printed
 * Return: number of printed characters
 */

int print_octal(unsigned int num)
{
	char *str = convert_base(num, 8, false);
	int len = 0;

	if (num == 0)
		return (_putchar('0'));

	len += print_string(str);

	free(str);

	return (len);
}
