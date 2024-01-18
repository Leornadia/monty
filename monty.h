#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* global stack variable */
extern stack_t *stack; 

/* stack manipulation */  
void free_stack(void);
void add_node(stack_t **stack, const int n);
void op_push(stack_t **stack, unsigned int line_number);
void read_file(FILE *fp);
void execute_instruction(char *instr, stackt **stack);
void op_push(stack_t **stack, int line_num);
void op_pall(stack_t **stack, int line_num);
void op_pop(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack, unsigned int line_number);
void op_div(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void op_sub(stack_t **stack, unsigned int line_number);









#endif /* MONTY_H */
