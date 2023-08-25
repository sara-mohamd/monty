#include "monty.h"
/**
  *f_diff - sustration
  *@head: head of queue
  *@counter: line_number
  *Return: no 0 return
 */
void f_diff(stack_t **head, unsigned int counter)
{
stack_t *aux;
int xus, nodes;

aux = *head;
nodes = 0;
while (aux != NULL)
{
nodes++;
aux = aux->next;
}

if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}

aux = *head;
xus = aux->next->n - aux->n;
aux->next->n = xus;
*head = aux->next;
free(aux);
}
