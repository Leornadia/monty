#include "monty.h"
/**
 * op_pint - prints value at top of stack
 * @stack: double pointer to the top node
 * @line_number: current instruction line number
*/
void op_pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
