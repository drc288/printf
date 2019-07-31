#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

/* PROTOTYPE OF PRINTF */
int _printf(const char *format, ...);

/* OTHER */
int length(char *str);
void print_number(int n);
int _putchar(char c);
int digit(int n);
int negative(int n);

#endif
