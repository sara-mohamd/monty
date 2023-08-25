#include "monty.h"
/**
 * addexode - Adding node to the head of Queue.
 * @head: head of queue
 * @n: new_value
 * Return: no 0 return
*/
void addexode(stack_t **head, int n)
{

stack_t *new_core, *aux;

aux = *head;
new_core = malloc(sizeof(stack_t));
if (new_core == NULL)
{ printf("Error\n");
exit(0); }
if (aux)
aux->prev = new_core;
new_core->n = n;
new_core->next = *head;
new_core->prev = NULL;
*head = new_core;
}
