#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @agrc: Count arguments
 * @agrv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int agrc, char *agrv[])
{
	(void)agrc;
	printf("%s\n", argv[0]);

	return (0);
}