#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source string; gets appended to dest string
 * @dest: destination string; src is appended to it
 * @n: number of bytes of src that should be concatenated with dest
 * return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
