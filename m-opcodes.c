#include "monty.h"

/**
 * op_push - pushes an element to the stack.
 * @value: Value to add to the node
 * @actual_head: address of the head
 *
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	stack_t *current = *stack;

	new_node = malloc(sizeof(stack_t));
	new_node->n = line_number;
	new_node->next = *stack;
	new_node->prev = NULL;
	if (current != NULL)
		current->prev = new_node;
}

/**
 * op_pall - prints all the values on the stack, starting from the top of the stack.
 * @line_number: line of the bytecode with the command
 * @curr_head: pointer to the the head
 *
 */
void op_pall(stack_t **curr_head, unsigned int line_number)
{
	stack_t *tmp_node;

	(void)line_number;

	if (curr_head != NULL)
	{
		tmp_node = *curr_head;
		while (tmp_node != NULL)
		{
			printf("%d\n", tmp_node->n);
			tmp_node = tmp_node->next;
		}
	}
}
