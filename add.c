#include "monty.h"
/**
 * op_add - adds the top two elements of stack
 * @stack: double pointer to the top node
 * @line_number: current instruction line number
*/
void op_add(stack_t **stack, unsigned int line_number)
{
if (!(*stack) || !(*stack)->next)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
int sum = (*stack)->n + (*stack)->next->n; 
pop(stack, line_number);
(*stack)->n = sum;
}
/**
 * pop - removes the top element of the stack
 * @stack: double pointer to the top node
 * @line_number: current instruction line number
*/
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *tmp = *stack;
*stack = (*stack)->next;
free(tmp);
if (*stack != NULL)
{
(*stack)->prev = NULL;
}
}
