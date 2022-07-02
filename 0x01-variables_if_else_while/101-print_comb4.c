#include <stdio.h>

/**
 * main - printing 3-digit combinations with putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hundred;
	int ten;
	int one;

	for (hundred = '0'; hundred <= '9'; hundred++)
	{
		for (ten = (hundred + 1); ten <= '9'; ten++) /*ten=100's+1*/
		{
			for (one = (ten + 1); one <= '9'; one++) /*one=10's+1*/
			{
				putchar(hundred);
				putchar(ten);
				putchar(one);
				if (hundred != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
