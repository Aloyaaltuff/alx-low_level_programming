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
		printf("%s\n", argv[i]);
	}
	return (0);
}
