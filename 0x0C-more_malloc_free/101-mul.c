# include "main.h"
# include <stdlib.h>
# define BASE 10

long _atoi(char *s);
int print_number(long int);
void print_string(char *s);
/**
 * main - multiply two positive number
 * @argc: holds the size of argv to size of type of argv
 * @argv: hold args passed to main during execution
 *
 * Description: Multiple two positive numbers and if the first one any of
 * them contains a non-positive number or string returns an Error and a newline
 * Example:
 * 101-mul 20 40 = 800\n
 * Return: 0 onsuccess and 98 on failure
 */

int main(int argc, char **argv)
{
	long int num1, num2, num_t;
	char *err = "Error\n";

	if (argc != 3)
	{
		print_string(err);
		exit(98);
	}
	num1 = _atoi(*(argv + 1)) - 1;
	num2 = _atoi(*(argv + 2)) - 1;
	if (!(num1 + 1) || !(num2 + 1))
	{
		print_string(err);
		exit(98);
	}
	num_t = num1 * num2;
	if (print_number(num_t))
	{
		print_string(err);
		exit(98);
	}
	exit(EXIT_SUCCESS);
}

/**
 * _atoi - convert a string to interger
 * @s: pointer to string to convert to interger
 *
 * Description: returns null on first encounter of a noninterger
 * Return: an interger to type double or null
 */
long _atoi(char *s)
{
	int i;
	long int cnt;

	i = 0;
	cnt = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
			cnt = BASE * cnt + (*(s + i) - '0');
		else
			return (0);
		i++;
	}
	return (cnt + 1);
}

/**
 * print_number - prints positive number to standard output
 * @num: number to print in interger
 * Return: binary
 */

int print_number(long int num)
{
	long int len, tmp, tmp_len, i;
	char *num_arr;

	len = 1;
	tmp = num;
	while (num /= BASE)
		len++;
	num_arr = malloc(sizeof(char) * (len + 1));
	if (!num_arr)
		return (1);
	tmp_len = len;
	do {
		*(num_arr + --len) = '0' + (tmp % BASE);
	} while (tmp /= BASE);
	*(num_arr + tmp_len) = '\0';
	i = 0;
	while (i < tmp_len)
		_putchar(*(num_arr + i++));
	_putchar('\n');
	free(num_arr);
	return (0);
}

/**
 * print_string - print a string
 * @s: pointer to string to print
 */

void print_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		_putchar(*(s + i++));
}

