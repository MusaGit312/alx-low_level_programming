<<<<<<< HEAD
#include "main.h"

/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
**/
=======

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
>>>>>>> df3b224f25da0bb2962c1f5637b0572ab8de2c95

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
<<<<<<< HEAD
		counter++;
=======
	counter++;
>>>>>>> df3b224f25da0bb2962c1f5637b0572ab8de2c95
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
<<<<<<< HEAD
=======

>>>>>>> df3b224f25da0bb2962c1f5637b0572ab8de2c95
