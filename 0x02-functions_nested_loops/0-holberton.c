#include "main.h"

/**
 * main - program that prints "Holberton"
 * Return: 0 on success
 */
int main(void)
{
	char str[] = "Holberton";
	int i = 0;

	while (str[i] != '\0')
		_putchar(str[i++]);
	return (0);
}

