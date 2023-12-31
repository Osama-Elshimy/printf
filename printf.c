#include "main.h"

/**
 * handle_format_specifier - handles the format specifier
 * @specifier: format specifier
 * @args: arguments
 *
 * Return: number of characters printed
 */

int handle_format_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
			return (write_to_buffer(va_arg(args, int)));
		case 's':
			return (print_string(va_arg(args, char *)));
		case '%':
			return (write_to_buffer('%'));
		case 'i':
		case 'd':
			return (print_number(va_arg(args, int)));
		case 'u':
			return (print_unsigned_int(va_arg(args, unsigned int)));
		case 'o':
			return (print_octal(va_arg(args, unsigned int)));
		case 'x':
			return (print_hex(va_arg(args, unsigned int), false));
		case 'X':
			return (print_hex(va_arg(args, unsigned int), true));
		case 'p':
			return (print_address(va_arg(args, void *)));
		case 'b':
			return (print_binary(va_arg(args, unsigned int)));
		case 'S':
			return (print_non_printable(va_arg(args, char *)));
		case 'r':
			return (print_reverse(va_arg(args, char *)));
		case 'R':
			return (print_rot13(va_arg(args, char *)));
		default:
			return (print_invalid(specifier));
	}
}

/**
 * _printf - prints a formatted string to stdout
 * @format: format string
 * @...: arguments
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, chars_count = 0;

	if (format == NULL || (_strlen(format) == 1 && format[0] == '%'))
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			chars_count += handle_format_specifier(format[i], args);
		}
		else
			chars_count += write_to_buffer(format[i]);
	}

	va_end(args);
	_flush_buffer();

	return (chars_count);
}
