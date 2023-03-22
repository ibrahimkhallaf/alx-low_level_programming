#include "maim.h"
/*
 * print_sign - print + if n is greater than zero
 *              0 if n = zero
 *              - if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+')
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
