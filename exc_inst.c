#include "monty.h"
/**
* execute - executes out opcode
* @stack: stack with a head linked list
* @counter: line_counter
* @file: poiner Monty's file Poiner
* @contnt: line content
* Return: no 0 return
*/
int execute(char *contnt, stack_t **stack, unsigned int counter, FILE *file)
{
instruction_t opst[] = {
{"push", f_ans}, {"pall", f_dths}, {"pint", f_putr}, {"pop", f_kmcd},
{"swap", f_asti}, {"add", f_adition},
{"nop", f_emp},
{"sub", f_diff},
{"div", f_spl},
{"mul", f_mullp},
{"mod", f_crsd},
{"pchar", f_stchpr},
{"pstr", f_prtsk},
{"rotl", f_rott},
{"rotr", f_circ},
{"queue", f_prims},
{"stack", f_prntstack},
{NULL, NULL}
};
unsigned int w = 0;
char *po;
po = strtok(contnt, " \n\t");
if (po && po[0] == '#')
return (0);
buz.arg = strtok(NULL, " \n\t");
do {
if (!opst[w].opcode)
{
fprintf(stderr, "L%d: unknown instruction %s\n", counter, po);
fclose(file);
free(contnt);
free_stackk(*stack);
exit(EXIT_FAILURE);
}
if (strcmp(po, opst[w].opcode) == 0)
{
opst[w].f(stack, counter);
return (0);
}
w++;
} while (po);
return (1);
}
