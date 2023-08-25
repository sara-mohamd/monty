#include "monty.h"
/**
 * f_dths - indicates the stack
 * @head: head of the queue
 * @counter: not used
 * Return: no 0 return
*/
void f_dths(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;

for (; h != NULL; h = h->next)
{
printf("%d\n", h->n);
}
}

