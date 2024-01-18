#include "monty.h"
/**
 * op_swap - swaps the top two elements of stack
 * @stack: double pointer to the top node
 * @line_number: current instruction line number
*/
void op_swap(stack_t **stack, unsigned int line_number)
{
if (!(*stack) || !(*stack)->next) 
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
stack_t *first = *stack;
stack_t *second = (*stack)->next;
*stack = second;
second->prev = NULL;
first->prev = second;
first->next = second->next;
second->next = first;
if (first->next)
first->next->prev = first;
}
