#include "monty.h"
/**
 * f_spl - divides the top two components in the stack.
 * @head: head of the queue
 * @counter: line_number
 * Return: no 0 return
*/
void f_spl(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}

h = *head;
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}

aux = h->next->n / h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
