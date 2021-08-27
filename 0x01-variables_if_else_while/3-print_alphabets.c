#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i < 26; i++, alpha++)
		putchar(alpha);
	alpha = 'A';
	for (i = 0; i < 26; i++, alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

