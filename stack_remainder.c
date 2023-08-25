#include "monty.h"
/**
 * f_crsd - determines the second's division's remainder.
 * stacked element at the top by another element at the top
 * @head: Queue head
 * @counter: line_number
 * Return: no 0 return
*/
void f_crsd(stack_t **head, unsigned int counter)
{
stack_t *h;
int laz = 0, aux;

h = *head;
while (h)
{
h = h->next;
laz++;
}
if (laz < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
aux = h->next->n % h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
