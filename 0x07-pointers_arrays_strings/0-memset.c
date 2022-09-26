#include "main.h"

/**
* _memset - fills memory with a contant byte
* @s: adress to memmory block
* @b: char to be used
* @n: number of bytes to be used
*
*Return: pointer to the memory block
*/
char *_memset(char *S, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1]  = b;
		n--;
	}
	return (s);
}
