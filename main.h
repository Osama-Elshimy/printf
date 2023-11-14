#ifndef PRINTF_HEADER_H
#define PRINTF_HEADER_H

#include <ctype.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

size_t _strlen(const char *str);
int print_string(const char *str);
int print_invalid(char c);
int print_number(int num);
int print_binary(unsigned int n);
int print_unsigned_int(unsigned int num);
int print_octal(unsigned int num);
int print_hex(unsigned int num, bool upper);
void _flush_buffer(void);
int write_to_buffer(char c);
int print_non_printable(const char *str);
int print_address(void *address);
int print_reverse(const char *str);
char *_strdup(const char *src);
int print_rot13(const char *str);

char *convert_base(unsigned long number, int base, bool upper);

int handle_format_specifier(char specifier, va_list args);
int _printf(const char *format, ...);

#endif
