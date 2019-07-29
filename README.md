# Printf

## Holberton School

### Santiago Agudelo & David Rosero Calle

## Description of _printf

Recreate the printf() command with most of its functionalities

## Special characters

* %c: print a singlecharacter
* %d: print adecimal (base 10) number
* %e: print anexponential floating-point number
* %f: print afloating-point number
* %g: print ageneral-format floating-point number
* %i: print aninteger in base 10
* %o: print a number inoctal (base 8)
* %s: print astring of characters
* %u: print anunsigned decimal (base 10) number
* %x: print a number in hexidecimal (base 16)
* %%: print a percent sign (\%also works)

## Syntax

* Example %c:

```c
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

int main(void)
{
	int index;

	index = 50;
	_printf("Index: %i", index);
	return (0);
}

Outout: "Index: 50"
