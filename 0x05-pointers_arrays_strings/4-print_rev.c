<<<<<<< HEAD
=======

>>>>>>> df3b224f25da0bb2962c1f5637b0572ab8de2c95
#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
<<<<<<< HEAD
=======

>>>>>>> df3b224f25da0bb2962c1f5637b0572ab8de2c95
