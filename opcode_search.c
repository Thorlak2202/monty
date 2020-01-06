#include "monty.h"

/**
  * get_op_func - find the specific opcode function
  * @s: string with monty bytecode
  *
  * Return: always NULL
  */

void (*get_op_func(char *s))(stack_t **, unsigned int)
{
instruction_t ops[] = {
{"push", op_push},
{"pall", op_pall},
{NULL, NULL}
};
int i = 0;

while (ops[i].opcode)
{
if (strcmp(ops[i].opcode, s) == 0)
{
	return (ops[i].f);
}
i++;
}
return(NULL);
}