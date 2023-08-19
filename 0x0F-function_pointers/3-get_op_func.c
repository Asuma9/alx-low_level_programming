#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - calls only required function
 * @s: op arg string (+, -, *, %, /)
 * Return: op_func pointer par (success)
 */
typedef int (*op_func)(int, int);

typedef struct
{
	char *operator;
	op_func function;
} op_t;

op_t ops[] = 
{
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div};
	{"%", op_mod};
	{NULL, NULL};
};

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (ops[i].operator != NULL)
	{
		if (ops[i].operator[0]) == s[0] && ops[i].operator[i] == '\0'
		{
			return (ops[i].function);
		}
		i++;
	}
	return (NULL); /* operator does not match */
}
