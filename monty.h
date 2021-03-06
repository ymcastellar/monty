#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define DELIMS "\n \t\r"

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct glob_vars - struct for global variables
* @glob_int: integer
* Description: structure that contains the variables
* shared across the whole program
*/
typedef struct glob_vars
{
	    int glob_int;
} glob_t;

extern glob_t glob_vars;
glob_t glob_vars;

/* operations */
void _pall(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);

int operation(char *argv);
char **_splitline(char *line);
void free_l(stack_t *head);
int _isnumber(char *chk_strings);
void (*opc(char *op, unsigned int line_number))(stack_t **stack, unsigned int);
int wrapper(unsigned int line, char **chk_strings, stack_t **stack);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
#endif
