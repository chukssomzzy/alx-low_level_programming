# C - Functions, nested loops

## _putchar 
```c
 #include "main.h"

/**
 * main - the entry point
 * Description: Prints `_putchar` to console
 * Return: success (0)
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
```

## print all in lowercase

```C
 # include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
```
## isLower
```c
 # include "main.h"
#define islower 97
/**
 * _islower - returns a int for true and false state
 * @c: an interger to hold the decimal value of the character``
 * Return: 1 is true and 0 is false
 */

int _islower(int c)
{
	if (c >= islower)
		return (1);
	return (0);
}
```
