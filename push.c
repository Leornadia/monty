#include "monty.h"
/**
 * op_push - pushes an integer onto the stack
 * @stack: double pointer to the stack
 * @line_number: line number of instruction
*/
void op_push(stack_t **stack, unsigned int line_number)
{
int num;
char *arg = strtok(NULL, " \n\t\r");
if (!arg || !is_number(arg))
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
num = atoi(arg);
add_node(stack, num);
}
/**
 * add_node - adds new node with data to stack
 * @stack: double pointer to the top node
 * @n: integer data for the new node
*/
void add_node(stack_t **stack, int n)
{
stack_t *new = malloc(sizeof(stack_t));
if (!new)
{
free_stack(*stack);
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new->n = n;
new->prev = NULL;
new->next = *stack;
if (*stack)
(*stack)->prev = new;
*stack = new;
}
