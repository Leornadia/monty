#include "monty.h"
/**
 * op_mod - computes the modulus (rest of division)
 * of the second element divided by the top element
 * @stack: double pointer to the top node
 * @line_number: current instruction line number
*/
void op_mod(stack_t **stack, unsigned int line_number)
{
if (!(*stack) || !(*stack)->next)
{
fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
if ((*stack)->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
exit(EXIT_FAILURE);
}
int mod = (*stack)->next->n % (*stack)->n;
pop(stack, line_number);
(*stack)->n = mod;
}
/**
 * pop - removes the top element from the stack
 * @stack: double pointer the the top node
 * @line_number: current instruction line number
*/
void pop(stack_t **stack, unsigned int line_number)
{
}
