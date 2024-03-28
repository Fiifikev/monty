#include "monty.h"
/**
 * monty_pop - removes elemts in a stack
 * @head: head of stack
 * @counter: line number
 * Return: none
 */
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *apt;

if (head == NULL)
{
fprintf(stderr, "L%d: cant pop an empty stack \n", counter);
fclose(lus.file);
free(lus.info);
free_stack(*head);
exit(EXIT_FAILURE);
}
apt = *head;
*head = apt->next;
free(apt);
/**
 * monty_pall - adds value on the stack
 * @head: head of stack
 * @counter: counter number
 * Return: none
 */
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *apt;
(void)counter;

apt = *head;
if (apt == NULL)
return;
while (apt)
{
printf("%d\n", apt->n);
apt = apt->next;
}
}
/**
 * monty_push - pushes element to stack
 * @head: head
 * @counter:num line
 * Return: none
 */
void f_push(stack_t **head, unsigned int counter)
{
int n, flag = 0, x = 0;

if (lus.arg)
{
if (lus.arg[0] == '-')
x++;
for (; lus.arg[x] != '\0'; x++)
{
if (lus.arg[x] > 57 || lus.arg[x] < 48)
flag = 1; }
if (flag == 1)
{ fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(lus.file);
free(lus.info);
free_stack(*head);
exit(EXIT_FAILURE);}}
else
{ fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(lus.file);
free(lus.info);
free_stack(*head);
exit(EXIT_FAILURE); }
n = atoi(lus.arg);
if (lus.lifi == 0)
addnode(head, n);
else
addqueue(head, n);
}
