#include "main.h"

/**
 * _strcpy - Copies of a string pointed to by @src, including the 
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest:A buffer to copy the string to.
 * @src: A source string to copy.
 *
 * Return: Apointer to the direction string @dest.
 */
char *strcpy (char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];

	}
	dest[index] = '\0';

	return (dest);

}
