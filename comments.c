void execute_instruction(char *instr, unsigned int line_num) 
{
    // Skip comment lines starting with #
    if (instr[0] == '#') {
        return;
    }

  
    char *opcode = strtok(instr, " \t\n");
    
    
    if (strcmp(opcode, "push") == 0) {
        op_push(stack, line_num); 
    }
    else if (strcmp(opcode, "pall") == 0) {
        op_pall(stack, line_num);
    }
    
}
