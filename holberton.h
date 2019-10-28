#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int switch_statement(va_list, char, int);
int print_char(va_list, int *);
int print_string(va_list, int *);
int print_num(va_list, int *, char);
char *num_converter(unsigned int, int);
int count_digits(unsigned int);
int out_num(char *, int, int *);

#endif
