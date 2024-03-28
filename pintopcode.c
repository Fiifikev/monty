#include "monty.h"
/**
 * monty_pint - pint
 * @head:head of stack
 * @counter: line number
 * Returb : 0
 */
void f_pint(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
fclose(lus.file);
free(lus.info);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
/**
 * free_stack - free linkedlist
 * @head: head
 */
void free_stack(stack_t *head)
{
stack_t  *out;
out = head;
while (head)
{
out = head->next;
free(head);
head = out;
}
}
/**
 * monty_nop - none
 * @head : stack head
 * @counter: line number
 * Return: none
 */
void f_nop(stack_t **head, unsigned int counter)
{
(void) counter;
(void) head;
}
