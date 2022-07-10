#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @j: int type number
 * Return: return value of last digit
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
