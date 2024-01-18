#include "monty.h"
/**
 * op_div - divides second element by top element of stack
 * @stack: double pointer to the top node of the stack
 * @line_number: current instruction line number
*/
void op_div(stack_t **stack, unsigned int line_number)
{
if (!(*stack) || !(*stack)->next)
{
fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
if ((*stack)->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
exit(EXIT_FAILURE);
}
int second = (*stack)->next->n;
int top = (*stack)->n;
int result = second / top;
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
