#include "main.h"
/**
 * _pow_recursion - returns value of x raised to the pow of y
 * @x: the number
 * @y: the power
 * Returns: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
