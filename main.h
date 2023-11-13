#ifndef PRINTF_HEADER_H
#define PRINTF_HEADER_H

#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
size_t _strlen(const char *str);
int print_string(const char *str);
int print_invalid(char c);
int print_number(int num);
int print_binary(unsigned int n);
int print_unsigned_int(unsigned int num);
int print_octal(unsigned int num);
int print_hex(unsigned int num, bool upper);

char *convert_base(unsigned long number, int base, bool upper);

void handle_format_specifier(char specifier, va_list args, int *chars_count);
int _printf(const char *format, ...);

#endif
