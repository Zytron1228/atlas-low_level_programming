#include "main.h"

/**
 * _pow_recursion - does exponents on a number by returning @x^@y.
 *
 * @x: number to be raised to the power of @y
 * @y: number to be used to raise @x to the power of this
 *
 * Return: @x to the power of @y
 */
int _pow_recursion(int x, int y)
{
	if (y >= 1)
		return (x * _pow_recursion(x, y - 1));
	if (y >= 0)
		return (1);
	return (-1);
}
