#include <stdio.h>

/**
 * main - programm that multiplies two numbers
 * @argc: number
 * @argv:pointer yo an array
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) *  atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("wrong input\n");
	}
	return (1);
}
