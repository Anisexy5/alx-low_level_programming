#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int c;

	b = 0;
	while (dest[i] != '\0')
	{
		b++;
	}
	c = 0;
	while (c < n && src[j] != '\0')
	{
		dest[b] = src[c];
		b++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
