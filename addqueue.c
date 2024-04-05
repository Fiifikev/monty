#include "monty.h"

/**
 *addqueue - add stack
 *@n: new value
 *@head: head
 *Return: none
 */
void addqueue(stack_t **head, int n)
{
stack_t *new_node, *out;

out = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
}
new_node->n = n;
new_node->next = NULL;
if (out)
{
while (out->next != NULL)
out = out->next;
}
if (out == NULL)
{
*head = new_node;
new_node->prev = NULL;
}
else
{
out->next = new_node;
new_node->prev = out;
}
}
/**
 *f_queue - prints the top
 *@head: stack head
 *@counter: line_number
 *Return:none
 */
void f_queue(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 1;
}


/**
 *f_mod - computes the rest of the division of the second
 *@head: stack head
 *@counter: line_number
 *Return: none
 */
void f_mod(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
out = h->next->n % h->n;
h->next->n = out;
*head = h->next;
free(h);
}

/**
 *f_mul - multiplies stack.
 *@head: head
 *@counter: line_number
 *Return: no return
 */
void f_mul(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
out = h->next->n * h->n;
h->next->n = out;
*head = h->next;
free(h);
}


