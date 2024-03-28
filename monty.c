#include "monty.h"

lus_t lus = {NULL, NULL, NULL, 0};
/**
 * main - code interpreter
 * @argc: arguments
 * @argv: file location
 * Return:  0
 */

int main(int argc, char *argv[])
{

char *info;
unsigned int counter = 0;
size_t size = 0;
FILE *file;
ssize_t *read_line = 1;
stack_t *stack = NULL;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
lus.file = file;
if (file == NULL)
{
fprintf(stderr, "Error: Can't open file<file> %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (read_line > 0)
{
info = NULL;
read_line = getline(&info, &size, file);
lus.info = info;
counter++;
if (read_line > 0)
{
execute(info, &stack, counter, file);
}
free(info);
}
free_stack(stack);
fclose(file);
return (0);
}
