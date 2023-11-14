#include "main.h"

/**
 * print_hex - prints an unsigned number
 * @num: number to be printed
 * @upper: if true, uppercase hex
 * Return: number of printed characters
 */

int print_hex(unsigned int num, bool upper)
{
	char *str = convert_base(num, 16, upper);
	int len = 0;

	if (num == 0)
		return (write_to_buffer('0'));

	len += print_string(str);

	free(str);

	return (len);
}
