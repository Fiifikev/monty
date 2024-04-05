#include "monty.h"

/**
 * f_stack - stack
 * @head: head of node
 * @counter: counter
 * Return : none
 */
void f_stack(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 0;
}



/**
 *f_rotl- rotates the stack to the top
 *@head: stack head
 *@counter: line_number
 *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
stack_t *tmp = *head, *out;

if (*head == NULL || (*head)->next == NULL)
{
return;
}
out = (*head)->next;
out->prev = NULL;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = *head;
(*head)->next = NULL;
(*head)->prev = tmp;
(*head) = out;
}

/**
 *f_rotr- rotates the stack to the bottom
 *@head: stack head
 *@counter: line_number
 *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *copy;

copy = *head;
if (*head == NULL || (*head)->next == NULL)
{
return;
}
while (copy->next)
{
copy = copy->next;
}
copy->next = *head;
copy->prev->next = NULL;
copy->prev = NULL;
(*head)->prev = copy;
(*head) = copy;
}





