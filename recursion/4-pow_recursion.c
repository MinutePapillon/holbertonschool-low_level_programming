/**
 * _pow_recursion - function that returns
 * @x: value
 * @y: power
 *
 * Return: return the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

