#include "main.h"

/**
 * _putchar - print character
 * Description: print a single character and send number of bytes written
 * @c: a signle char
 * Return: 1 on sucess
*/

int _putchar(char c)
{
	if (write(1, &c, 1) != 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
