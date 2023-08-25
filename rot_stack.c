#include "monty.h"
/**
	*f_rott- the stack is turned to the top by rotation
	*@head: queue head
	*@counter: line_number
	*Return: no 0 return
 */
void f_rott(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
stack_t *tmpe = *head, *aux;

if (*head == NULL ||
(*head)->next == NULL)
{
return;
}
aux = (*head)->next;
aux->prev = NULL;
do {
tmpe = tmpe->next;
} while (tmpe->next != NULL);
tmpe->next = *head;
(*head)->next = NULL;
(*head)->prev = tmpe;
(*head) = aux;
}
