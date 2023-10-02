#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive number
 * @argc: number of argumens
 * @argv: pointer of array
 * Return: 0(sucess), non-zero(fail) .
*/

int main(int argc, char *argv[])
{
	int mull = 0;

	if (argc == 3)
	{
		mull = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mull);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

