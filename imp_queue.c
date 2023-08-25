#include "monty.h"
/**
 * f_prims - display photos on the top
 * @head: queue head
 * @counter: line_number
 * Return: no 0 return
*/
void f_prims(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
buz.lffiy = 1;
}

/**
 * adndque - node to the tail stack be added
 * @n: new_value
 * @head: queue head
 * Return: no 0 return
*/
void adndque(stack_t **head, int n)
{
stack_t *new_core, *aux;

aux = *head;
new_core = malloc(sizeof(stack_t));
if (new_core == NULL)
{
printf("Error\n");
}
new_core->n = n;
new_core->next = NULL;

if (aux)
{
do {
aux = aux->next;
} while (aux->next != NULL);
}

if (!aux)
{
*head = new_core;
new_core->prev = NULL;
}
else
{
aux->next = new_core;
new_core->prev = aux;
}
}
