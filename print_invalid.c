#include "main.h"

/**
 * print_invalid - prints an invalid format specifier
 * @c : specifier
 * Return: number of bytes printed
 */

int print_invalid(char c)
{
	int len = 0;

	len += write_to_buffer('%');
	len += write_to_buffer(c);

	return (len);
}
