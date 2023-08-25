#include "monty.h"
/**
 * f_stchpr - print the Queue's top char
 * the begining of a new line
 * @head: head of the Queue
 * @counter: line_number
 * Return: no 0 return
*/
void f_stchpr(stack_t **head, unsigned int counter)
{
stack_t *h;

h = *head;
if (!h)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}
if (h->n > 127 || h->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", h->n);
}
