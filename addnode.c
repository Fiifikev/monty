#include "monty.h"
/**
 *addnode - add node to the head stack
 *@head: head of the stack
 *@n: new_value
 *Return: no return
 */
void addnode(stack_t **head, int n)
{

stack_t *new_node, *out;

out = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{ printf("Error\n");
exit(0); }
if (out)
out->prev = new_node;
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;
*head = new_node;
}

 /**
  *f_add - adds the two element
  *@head:  head
  *@counter: line number
  *Return: none
  */
void f_add(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, out;

h = *head;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
out = h->n + h->next->n;
h->next->n = out;
*head = h->next;
free(h);
}
/**
 *f_div - divides the stack's top two element
 *@head: the stack's head
 *@counter: the line number
 *Return: nothing
 */
void f_div(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, out;

h = *head;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
out = h->next->n / h->n;
h->next->n = out;
*head = h->next;
free(h);
}

