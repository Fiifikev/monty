#ifndef monty_h
#define monty_h
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>
/**
 *struct stack_s - doubly linked list representation of a stack (or queue)
 *@n: integer
 *@prev: points to the previous element of the stack (or queue)
 *@next: points to the next element of the stack (or queue)
 *Description: doubly linked list node structure
 *for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 *struct instruction_s - opcode and its function
 *@opcode: the opcode
 *@f: function to handle the opcode
 *Description: opcode and its function
 *for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct lus_s - opcode variable
 * @arg:agrument value
 * @file:file pointer
 * @info :information
 * @lifi :flag change
 * Description: value ofprogram LIFO,FIFO
 */
typedef struct lus_s
{
char *info, *arg;
FILE *file;
int lifi;
} lus_t;
extern lus_t lus;


void free_stack(stack_t *head);
/**int main(int argc, char *argv[])*/
void f_nop(stack_t **head, unsigned int counter);
void f_pop(stack_t **head, unsigned int counter);
void f_pall(stack_t **head, unsigned int number);
void f_push(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
void addnode(stack_t **head, int n);
void f_add(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);

#endif
