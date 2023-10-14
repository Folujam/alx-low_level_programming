#include "3-calc.h"

/**
  *op_add - sums 2 op_t
  *@a: int
  *@b: int
  *Return: sum
  */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
  *op_sub - subs 2 op_t
  *@a: int
  *@b: int
  *Return: sub/int
  */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}
/**
  *op_mul - multiplies 2 op_t
  *@a: int
  *@b: int
  *Return: mul/int
  */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
  *op_div - divide 2 op_t
  *@a: int
  *@b: int
  *Return: int
  */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
/**
  *op_mod - mods 2 op_t
  *@a: int
  *@b: int
  *Return: mod/int
  */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
