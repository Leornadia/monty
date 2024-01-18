#include "monty.h"

#define USAGE_ERROR "USAGE: monty file"

stack_t *stack = NULL;

void read_file(FILE *fp);
void execute_instruction(char *instr, stack_t **stack);

void op_push(stack_t **stack, int line_num);
void op_pall(stack_t **stack, int line_num);

int main(int argc, char **argv) {

    FILE *fp;
    
    if (argc != 2) {
        fprintf(stderr, "%s\n", USAGE_ERROR);
        exit(EXIT_FAILURE); 
    }
    
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    
    read_file(fp, &stack);
    
    fclose(fp);
    free(stack);
    
    return EXIT_SUCCESS;
}


void read_file(FILE *fp, stack_t **stack) {
    
    char *line = NULL;
    size_t len = 0;
    unsigned int line_num = 0;
    
    while(getline(&line, &len, fp) != -1) {
      
        line_num++;
        execute_instruction(line, stack); 
    }
    
    free(line);
}

void execute_instruction(char *instr, stack_t **stack) {

    char *opcode = strtok(instr, " ");
    
    if (strcmp(opcode, "push") == 0)
        op_push(stack, line_num);
        
    else if (strcmp(opcode, "pall") == 0)
        op_pall(stack, line_num);

}
