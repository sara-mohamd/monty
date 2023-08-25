#include "monty.h"
/**
 * f_asti - adds the stack's top two items.
 * @head: head of the queue
 * @counter: line_number
 * Return: no 0 return
*/
void f_asti(stack_t **head, unsigned int counter)
{
stack_t *h;
int laz = 0, aux;

h = *head;
for (laz = 0; h != NULL; laz++)
{
h = h->next;
}

if (laz < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}

h = *head;
aux = h->n;
h->n = h->next->n;
h->next->n = aux;
}
