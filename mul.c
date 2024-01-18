#include "monty.h"
/**
 * op_mul - multiplies the second element
 *         by the top element of the stack
 * @stack: double pointer to the top node
 * @line_number: current instruction line number
*/
void op_mul(stack_t **stack, unsigned int line_number)
{
if (!(*stack) || !(*stack)->next)
{
fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
int result = (*stack)->n * (*stack)->next->n;
pop(stack, line_number);
(*stack)->n = result;
}
/**
 * pop - removes the top element of the stack
 * @stack: double pointer to the stack
 * @line_number: current instruction line number
*/
void pop(stack_t **stack, unsigned int line_number)
{
}
