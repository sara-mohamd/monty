#include "monty.h"
/**
 * f_adition - adds the top two items in the stack.
 * @head: Queue head
 * @counter: line_number
 * Return: no 0 return
*/
void f_adition(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->n + h->next->n;
h->next->n = aux;
*head = h->next;
free(h);
}
