#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add -  which is to add a to b.
* @a: the first input parameter
* @b: the second input parameter
* Return: specifies thatthe function returns
* the result of adding a and b.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - which is to subtract b from a.
* @a:  the first input parameter
* @b: the second input parameter
* Return:  the result of subtracting b from a
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - which is to multiply a and b together.
* @a: the first input parameter
* @b: the second input parameter
* Return: function returns the product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - which is to divide a by b.
* @a: the First Input parameter
* @b: Second Input parameter
* Return: he function returns the quotient
* obtained after dividing a by b.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - which is to compute the modulus of a and b.
 * @a: the First Input parameter
 * @b: Second Input parameter
 * Return: the function returns the modulus obtained after dividing a by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
