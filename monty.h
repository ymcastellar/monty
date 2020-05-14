#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

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

void call_opcodes(stack_t **stack, char *op, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);

#endif
