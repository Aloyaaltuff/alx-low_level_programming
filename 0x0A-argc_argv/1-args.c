#include<stdio.h>

/**
 * main - program that print the number of the arguments
 * @argc: integer
 * @argv: the value of the argument
 * Return: 0
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("argc = %d\n", argc - 1);
	return (0);
}
