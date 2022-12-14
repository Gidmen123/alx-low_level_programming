#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all numbers from n to 98
 * @n: the numbers to start counting from n to 98
 * Return: always 0
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98");
	_putchar('\n');
	return (0);
}
