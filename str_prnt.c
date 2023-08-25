#include "monty.h"
/**
 * f_prtsk - starting at the very top of the stack, the string is printed
 * followedded by a is news
 * @head: queue head
 * @counter: line_number
 * Return: no 0 return
*/
void f_prtsk(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;

do {
if (h->n > 127 || h->n <= 0)
{
break;
}
printf("%c", h->n);
h = h->next;
} while (h);

printf("\n");
}
