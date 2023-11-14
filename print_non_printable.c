#include "main.h"

/**
 * print_non_printable - prints ascii codes in hex
 * @str: string to be printed
 * Return: length of printed string
 */

int print_non_printable(const char *str)
{
	int len = 0, i;
	int str_length;
	char *result;

	if (str == NULL)
		return (print_string("(null)"));

	str_length = (int)_strlen(str);

	for (i = 0; i < str_length; i++)
	{
		if (!isprint(str[i]))
		{
			result = convert_base(str[i], 16, true);
			len += print_string("\\x");
			if (_strlen(result) == 1)
				len += write_to_buffer('0');

			len += print_string(result);
			free(result);
		}
		else
			len += write_to_buffer(str[i]);
	}

	return (len);
}
