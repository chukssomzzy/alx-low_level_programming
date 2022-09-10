# include <stdio.h>
  /* more headers goes there */

/* betty style doc for function main goes there */

 /**
  * main - entry point of the code
  *
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

