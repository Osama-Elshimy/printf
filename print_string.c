#include "main.h"

/**
 * print_string - prints a string
 * @str: string
 * Return: length of string
 */

int print_string(const char *str)
{
	int i, len;

	if (!str)
		str = "(null)";

	len = _strlen(str);
	for (i = 0; i < len; i++)
		write_to_buffer(str[i]);

	return (len);
}
