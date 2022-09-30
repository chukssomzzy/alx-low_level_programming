# include "main.h"
# include <stdio.h>
# include <stdlib.h>


int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("ERROR\n");
		exit (EXIT_FAILURE);
	}
	printf("%i\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
	exit (EXIT_SUCCESS);
}

