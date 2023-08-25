#include "monty.h"
/**
 * f_kmcd - set photos on the top
 * @head: queue head
 * @counter: line_number
 * Return: no 0 return
*/
void f_kmcd(stack_t **head, unsigned int counter)
{
stack_t *h;

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}
h = *head;
*head = h->next;
free(h);
}
