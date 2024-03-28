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
lus.lifi = 1;
}

