#include "main.h"
#define BUFFER_SIZE 1024

static char buffer[BUFFER_SIZE];

static int chars_count;

/**
 * _flush_buffer - flushes the buffer
 */

void _flush_buffer(void)
{
	write(1, buffer, chars_count);
	chars_count = 0;
}

/**
 * write_to_buffer - writes a character to the buffer
 * @c: the character to write
 * Return: 1
 */

int write_to_buffer(char c)
{
	if (chars_count == BUFFER_SIZE)
		_flush_buffer();

	buffer[chars_count++] = c;

	return (1);
}
