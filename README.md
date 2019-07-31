# Printf

## Holberton School

### Santiago Agudelo & David Rosero Calle

## Description of _printf

Recreate the printf() command with most of its functionalities

## Special characters

* %c: print a singlecharacter
* %d: print adecimal (base 10) number
* %i: print aninteger in base 10
* %s: print astring of characters
* %%: print a percent sign (\%also works)

## Syntax

* Example %c:

```c
#include "holberton.h"

/**
 * main - main function
 *
 * Return: 0 to success
 */

int main(void)
{
	char c;

	c = 'W';
	_printf("Hello %cord\n", c);
	return (0);
}
```

Output: "Hello Word"

* Example %d:

```c
#include "holberton.h"

/**
 * main - main function
 *
 * Return: 0 to success
 */

int main (void)
{
	int num;

	num = -1024;
	_printf("The number is: %d", num);
	return (0);
}
```

Output: "The number is: -1024"

* Example %i:
```c
#include "holberton.h"

/**
 * main - main function
 *
 * Return: 0 to success
 */

int main(void)
{
	int index;

	index = 50;
	_printf("Index: %i", index);
	return (0);
}
```

Outout: "Index: 50"
