#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char alpha = '0';
	int i;

	for (i = 0; i < 10; i++, alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}

