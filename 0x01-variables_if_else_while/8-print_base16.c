# include <stdio.h>
/**
 * main - entry point
 * Return: success(0)
 */

int main(void)
{
	int tempChar, count, starting_count, end_count;

	tempChar = 48;
	count = 10;
	starting_count = tempChar;
	end_count = 102;

	while (tempChar <= end_count)
	{
		if (tempChar == (starting_count + count))
		{
			tempChar = 97;
		}
		putchar(tempChar);
		tempChar++;
	}
	putchar('\n');
		return (0);
}
