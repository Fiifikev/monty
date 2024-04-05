#include "monty.h"
/**
 * f_pall - adds value on the stack
 * @head: head of stack
 * @counter: counter number
 * Return: none
 */
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
/**
 * f_pop - rmove value on stack
 * @head: head
 * @counter: num line
 * return : none
 */
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *h;

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
*head = h->next;
free(h);
}

/**
*f_pstr - prints the string
*@head: stack head
*@counter: line_number
*Return: none
*/
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
while (h)
{
if (h->n > 127 || h->n <= 0)
{
break;
}
printf("%c", h->n);
h = h->next;
}
printf("\n");
}


/**
 *f_push - add node to the stack
 *@head: stack head
 *@counter: line_number
 *Return: no return
 */
void f_push(stack_t **head, unsigned int counter)
{
int n, j = 0, flag = 0;

if (bus.arg)
{
if (bus.arg[0] == '-')
j++;
for (; bus.arg[j] != '\0'; j++)
{
if (bus.arg[j] > 57 || bus.arg[j] < 48)
flag = 1; }
if (flag == 1)
{ fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE); }}
else
{ fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE); }
n = atoi(bus.arg);
if (bus.lifi == 0)
addnode(head, n);
else
addqueue(head, n);
}

