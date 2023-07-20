<<<<<<< HEAD
=======

>>>>>>> df3b224f25da0bb2962c1f5637b0572ab8de2c95
#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
<<<<<<< HEAD
=======

>>>>>>> df3b224f25da0bb2962c1f5637b0572ab8de2c95
