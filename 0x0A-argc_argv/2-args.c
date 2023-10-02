#include <stdio.h>
/**
 * main - programm print all argument
 * @argc: integer
 * @argv: value of argument
 * Return:0
*/
int main(int argc, char const *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("argv[%d] is %s\n", i, argv[i]);
	}
	return (0);
}
