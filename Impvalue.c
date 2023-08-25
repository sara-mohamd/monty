#include "monty.h"
/**
 * f_putr - set photos the top
 * @head: queue head
 * @counter: line_number
 * Return: no 0 return
*/
void f_putr(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
fclose(buz.file);
free(buz.contnt);
free_stackk(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
