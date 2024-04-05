#include "monty.h"

/**
 *f_sub- subtraction of node
 *@head: stack head
 *@counter: number
 *Return: none
 */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *out;
int sus, nodes;

out = *head;
for (nodes = 0; out != NULL; nodes++)
out = out->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
out = *head;
sus = out->next->n - out->n;
out->next->n = sus;
*head = out->next;
free(out);
}
/**
 * f_swap - swap node
 * @head: head
 * @counter : number
 * return: none
 */

void f_swap(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
out = h->n;
h->n = h->next->n;
h->next->n = out;
}

