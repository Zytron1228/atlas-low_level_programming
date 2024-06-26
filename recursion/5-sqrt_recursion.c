#include "main.h"

/**
 * _sqrt_recursion - gets the natural square root of a number @n.
 * holy Home Depot rough AI deathbot, it WORKS!?!?!1
 * @n: input number to get the natural square root of
 * Return: natural square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return ((int)(_sqrt_part_two((float) n, (float) n / 2)));
}

/**
 * _sqrt_part_two - second function to find the square root of a number
 * @n: number to find sqrt of
 * @m: helper parameter to guess and check.
 * Return: the natural square root of a number
 * If it is a decimal, the number will not be found, so it returns -1
 */
float _sqrt_part_two(float n, float m)
{
	if (m * m == n)
		return (m);
	if (n < 0)
		return (-1);
	if (m > 46340) /*I might not need this, but I won't bother changing it*/
		return (_sqrt_part_two(n, 2 * ((_sqrt_part_two(n, m / 4))))); /*I definitely need this though*/
	if ((m * m) > n)
		return (_sqrt_part_two(n, --m));
	return (-1);
}
