#include <stdio.h>
/**
 * main - programm print all argument
 * @argc: integer
 * @argv: value of argument
 * Return:0
*/
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
