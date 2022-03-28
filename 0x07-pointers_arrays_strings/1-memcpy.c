#include "main.h"

/**
 * _memcpy - copies n bytes from memory src to memory dest
 * @src: source memory/array memory to be copied(pointer)
 * @dest: pointer storing copied memory
 * @n: number of bytes to be copied
 *
 * Return: dest as pointer
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
    *(dest + i) = *(src + i);
}
return (dest);
}


