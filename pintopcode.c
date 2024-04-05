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
fclose(bus.file);
free(bus.content);
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
 * f_nop - none
 * @head : stack head
 * @counter: line number
 * Return: none
 */
void f_nop(stack_t **head, unsigned int counter)
{
(void) counter;
(void) head;
}

/**
*f_pchar - prints the char at top with newline
*@head:  head
*@counter: line_number
*Return: none
*/
void f_pchar(stack_t **head, unsigned int counter)
{
stack_t *h;

h = *head;
if (!h)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
if (h->n > 127 || h->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", h->n);
}
