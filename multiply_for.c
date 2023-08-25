#include "monty.h"
/**
 * f_mullp - multiplies the two components of the top stack.
 * @head: queue head
 * @counter: line_number
 * Return: no 0 return
*/
void f_mullp(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}

h = *head;
aux = h->next->n * h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
