#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = '0';
	int i;

	for (i = 0; i < 10; i++, alpha++)
		putchar(alpha);
	alpha = 'a';
	for (i = 0; i < 6; i++, alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

