#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 0; j < 90; j++)
	{
		for ()
		{
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
		}
		if (j != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

