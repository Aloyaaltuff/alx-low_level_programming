#include<stdio.h>
/**
 * main - print program name
 * @argc: int
 * @argv: list
 * Return: 0 always
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s", i, argv[i]);
	}
	return (0);
}
