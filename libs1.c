#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - print number integer
 * @n: number integer
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}
	if (n / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}

/**
 * digit - get the number to digit
 * @n: the digit
 *
 * Return: the numbers of digits
 */

int digit(int n)
{
	int result;

	if ((n /10) < 1)
	{
		return (1);
	};

	result = 1 + digit(n / 10);

	return (result);
}

/**
 * length - print the length of the string
 * @str: string
 *
 * Return: length of char
 */

int length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{	
		i++;
	};

	return (i);
}
