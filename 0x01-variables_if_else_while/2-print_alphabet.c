# include <stdio.h>

/**
  * main - entry point of the code
  * Description: using ASCII property
  * Return: success (0)
  */

int main(void)
{
	char charCount = 97;

	while (charCount < 97 + 26)
	{
		putchar(charCount);
		charCount++;
	}
	putchar('\n');
	return (0);
}

