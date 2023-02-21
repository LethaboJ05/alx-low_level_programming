#include "main.h"i
/**
 * _abs - Computes the absolute value of an integer.
 * @c: the number to be computed.
 * Return: absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
	int absvalue;

	absvalue = c * (-1);
	return (absvalue);
	}
	return (c);
}
