#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * @src: input string
 * Return: pointer to the new string
 */

char *_strdup(const char *src)
{
	int i, len;
	char *dest;

	if (src == NULL)
		return (NULL);

	len = _strlen(src);
	dest = (char *)malloc((len + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * print_rot13 - encodes and prints a string using rot13
 * @str: input string
 * Return: number of characters printed
 */

int print_rot13(const char *str)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s;
	int result;

	if (str == NULL)
		return (print_string("(null)"));

	s = _strdup(str);

	if (s == NULL)
		return (-1);

	while (s[count])
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == alphabet[i])
			{
				s[count] = rot13[i];
				break;
			}
		}
		count++;
	}

	result = print_string(s);
	free(s);

	return (result);
}
