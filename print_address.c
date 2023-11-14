#include "main.h"

/**
 * print_address - prints an address
 * @address: address to print
 * Return: number of characters printed
 */

int print_address(void *address)
{
	char *str;
	int len = 0;

	if (!address)
		return (print_string("(nil)"));

	str = convert_base((unsigned long)address, 16, false);
	len += print_string("0x");
	len += print_string(str);

	free(str);

	return (len);
}
