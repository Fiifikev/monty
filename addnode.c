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
  * f_add - adds the two element.
  * @head:  head
  * @counter: line number
  * Return: none
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
fclose(lus.file);
free(lus.info);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
out = h->n + h->next->n;
h->next->n = out;
*head = h->next;
free(h);
}
