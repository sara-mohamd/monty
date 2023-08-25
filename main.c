#include "monty.h"
buz_t buz = {NULL, NULL, NULL, 0};
/**
* main - monty code debugger
* @argc: various arguments
* @argv: Monty Fille's residence
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
char *contnt;
FILE *file;
size_t size = 0;
ssize_t reed_line = 1;
stack_t *stack = NULL;
unsigned int counter = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
buz.file = file;
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (reed_line > 0)
{
contnt = NULL;
reed_line = getline(&contnt, &size, file);
buz.contnt = contnt;
counter++;
if (reed_line > 0)
{
execute(contnt, &stack, counter, file);
}
free(contnt);
}
free_stackk(stack);
fclose(file);
return (0);
}
