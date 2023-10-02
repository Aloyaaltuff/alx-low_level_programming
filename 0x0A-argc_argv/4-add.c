#include<stdio.h>
#include<stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of argument
 * @argv: pointer of an array
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '\0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
