#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char alpha = 'z';
	int i = 0;

	for (i = 0; i < 26; i++, alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}

