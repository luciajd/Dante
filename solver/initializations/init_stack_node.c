/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** init_stack
*/

#include "solver_lib.h"

s_stack *init_stack_node(int x, int y)
{
    s_stack *stack = malloc(sizeof(s_stack));

    if (stack == NULL)
        return (NULL);
    stack->x = x;
    stack->y = y;
    stack->next = NULL;
    stack->previus = NULL;
    return (stack);
}
