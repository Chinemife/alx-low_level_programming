#include <stdio.h>

/**
 *main - print reversed alphabet using putchar
 * Return: always 0 (success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
