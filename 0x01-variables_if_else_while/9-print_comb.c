# include <stdio.h>
/**
 * main - entry point
 *
 * Description: using putchar to print the number combination
 * Return: success(0)
 */

int main(void)
{
	int tempChar, count, end_count;

	tempChar = 48;
	count = 10;
	end_count = tempChar + count;

	while (tempChar <= end_count)
	{
		putchar(tempChar);
		if (tempChar >= end_count - 1)
			break;
		putchar(',');
		putchar(' ');
		tempChar++;
	}
	putchar('\n');
	return (0);
}
