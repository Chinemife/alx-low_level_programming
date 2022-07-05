#include <unistd.h>
/**
 * main - printing _putchar using putchar
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
