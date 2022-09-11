# include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: Success (0)
 *
 */


int main(void)
{
	int state = 0;
	int aphaNum = 25;
	char alpha = 97;
	int stateAlpha = 97;
	int compare = stateAlpha + aphaNum;

	while (state != 2)
	{
		putchar(alpha);
		if (alpha == compare)
		{
			stateAlpha = 65;
			state++;
			alpha = 64;
			compare = stateAlpha + aphaNum;
		}
		alpha++;
	}

	putchar('\n');
	return (0);
}

