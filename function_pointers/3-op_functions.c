#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: first operande
 * @b: second operand
 *
 * Return: return result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first operande
 * @b: second operand
 *
 * Return: return result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: first operande
 * @b: second operand
 *
 * Return: return result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: first operande
 * @b: second operand
 *
 * Return: return result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first operande
 * @b: second operand
 *
 * Return: return result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
