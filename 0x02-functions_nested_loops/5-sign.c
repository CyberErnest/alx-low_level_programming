#include "main.h"

/**
 * print_sign - determines if the input number
 * is greater, equal or less than zero
 * @n: the input number as an integer
 * Retrn: 1 is greater than zero, 0 is zero
 * -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
        else if (n < 0)
        { 
		_putchar (45);
		return (-1);
        }
        else
        {
		_putchar (48);
		return (0);
        }
_putchar('\n');
}
