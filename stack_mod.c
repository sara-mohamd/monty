#include "monty.h"
/**
* free_stackk - unlinks a list that has two links.
* @head: head of queue
*/
void free_stackk(stack_t *head)
{
stack_t *aux;

for (aux = head; head != NULL; )
{
aux = head->next;
free(head);
head = aux;
}
}

