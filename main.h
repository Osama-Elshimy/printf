#ifndef PRINTF_HEADER_H
#define PRINTF_HEADER_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
size_t _strlen(const char *str);
int print_string(const char *str);
int _printf(const char *format, ...);

#endif
