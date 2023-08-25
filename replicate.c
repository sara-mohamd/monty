#include "monty.h"
/**
	*f_circ- pulls the stack back around to the base by rotating
	*@head: queue head
	*@counter: line_number
	*Return: no 0 return
 */
void f_circ(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *replic;

replic = *head;

if (*head == NULL || (*head)->next == NULL)
{
return;
}

do {
replic = replic->next;
} while (replic->next != NULL);

replic->next = *head;
replic->prev->next = NULL;
replic->prev = NULL;
(*head)->prev = replic;
(*head) = replic;
}
