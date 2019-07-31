#include "holberton.h"

/**
 * negDigit - get the number to digit
 * @n: the digit
 *
 * Return: the numbers of digits
 */

int negative(int n)
{
	int result;

	if ((n / 10) > -1)
	{
		return (1);
	};

	result = 1 + negative(n / 10);
	return (result);
}

int _printf(const char *format, ...)
{
	va_list valist;
	int i = 0, num, counter = 0;
	char * str, c;

	va_start(valist, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (format[i] != '\0' && format != NULL)
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'd':
					case 'i':
						num = va_arg(valist, int);
						print_number(num);
						if (num < 0)
						{
							counter += negative(num) + 1;
						} else
						{
							counter += digit(num);
						}
						i = i + 2;
						break;
					case 'c':
						c = va_arg(valist, int);
						_putchar (c);
						i = i + 2;
						counter += 1;
						break;
					case 's':
						str = va_arg(valist, char*);
						if (str == NULL)
						{
							write(1,"(null)",6);
							return (6);
						}
						write(1, str, length(str));
						i = i + 2;
						counter += length(str);
						break;
					case '%':
						_putchar('%');
						i = i + 2;
						counter += 1;
						break;
					default:
						if (format[i + 1] == '\0')
						{
							_putchar(10);
							return (-1);
						}
						else if ((format [i + 1] < 65) || (format[i + 1] > 90
								&& format[i + 1] < 97) || (format[i + 1] < 123))
						{
							_putchar('%');
							counter += 1;
							i = i + 1;
							break;
						}
						i = i + 2;
				};
			};
			if (format[i] != '\0' && format[i] != '%')
			{
				_putchar(format[i]);
				i++;
				counter++;
			};
		};

	va_end(valist);
	return (counter);
}
