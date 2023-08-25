#include "monty.h"
/**
 * f_ans - adding a node to the stack
 * @head: Queue head
 * @counter: line_number
 * Return: no 0 return
*/
void f_ans(stack_t **head, unsigned int counter)
{
int n, t = 0, flaog = 0;

if (buz.arg)
{
if (buz.arg[0] == '-')
t++;
while (buz.arg[t] != '\0')
{
if (buz.arg[t] > 57 || buz.arg[t] < 48)
flaog = 1;
t++;
}
if (flaog == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}

n = atoi(buz.arg);

if (buz.lffiy == 0)
addexode(head, n);
else
adndque(head, n);
}
