#ifndef MAIN_H
#define MAIN_H
/**
 * struct op - is the Struct op
 * @op: variable of unspecified type that represents an operator.
 * @f: pointer to a function that is associated with the operator.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int op_div(int a, int b);
int op_mod(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_add(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
