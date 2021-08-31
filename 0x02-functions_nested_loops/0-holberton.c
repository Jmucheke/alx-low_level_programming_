#include "main.h"

/**
 * main - a simple program that outputs "Holberton"
 * Return: 0 on success
 */
int main(void)
{
	char str[] = "Holberton\n";
	int i = 0;
	char j;

	while (i <= 9)
		j = str[i];
		_putchar(j);
		i++
	return (0);
}

