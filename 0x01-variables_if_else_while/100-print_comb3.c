# include <stdio.h>
/**
 * main - entry point of the program
 * Description: using an 2d loop
 * Return: on Success (0)
 */

int main(void)
{
	int tempIndexI, tempIndexJ, count, end_count, tempState;

	tempIndexI = 48;
	count = 10;
	end_count = tempIndexI + count;
	tempState = 1;

	for (tempIndexI = 48; tempIndexI < end_count - 1; tempIndexI++)
	{
		for (tempIndexJ = 48; tempIndexJ < end_count; tempIndexJ++)
		{
			if (tempIndexI == tempIndexJ)
				tempState = 0;
			if (tempState)
			{
			putchar(tempIndexI);
			putchar(tempIndexJ);
			if (tempIndexJ >= (end_count - 1) && tempIndexI >= (end_count - 2))
				tempState = 0;
			if (tempState)
			{
				putchar(',');
				putchar(' ');
			}
			}
			tempState = 1;
		}

	}
	putchar('\n');
	return (0);
}
