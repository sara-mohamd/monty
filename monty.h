#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
* struct buz_s - variables --args, --fie, --line
* @arg: value
* @file: Monty Fiie is mentioned
* @contnt: lines contnt continuing
* @lffiy: flaog Flagging change stack <-> queue
* Description: ideals throughout the programme
*/
typedef struct buz_s
{
char *arg;
FILE *file;
char *contnt;
int lffiy;
}  buz_t;
extern buz_t buz;
/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *contnt);
void f_ans(stack_t **head, unsigned int number);
void f_dths(stack_t **head, unsigned int number);
void f_putr(stack_t **head, unsigned int number);
int execute(char *contnt, stack_t **head, unsigned int counter, FILE *file);
void free_stackk(stack_t *head);
void f_kmcd(stack_t **head, unsigned int counter);
void f_asti(stack_t **head, unsigned int counter);
void f_adition(stack_t **head, unsigned int counter);
void f_emp(stack_t **head, unsigned int counter);
void f_diff(stack_t **head, unsigned int counter);
void f_spl(stack_t **head, unsigned int counter);
void f_mullp(stack_t **head, unsigned int counter);
void f_crsd(stack_t **head, unsigned int counter);
void f_stchpr(stack_t **head, unsigned int counter);
void f_prtsk(stack_t **head, unsigned int counter);
void f_rott(stack_t **head, unsigned int counter);
void f_circ(stack_t **head, __attribute__((unused)) unsigned int counter);
void addexode(stack_t **head, int n);
void adndque(stack_t **head, int n);
void f_prims(stack_t **head, unsigned int counter);
void f_prntstack(stack_t **head, unsigned int counter);
#endif
