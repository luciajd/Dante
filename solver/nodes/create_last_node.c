/*
** EPITECH PROJECT, 2023
** B-PSU-200-BAR-2-1-minishell1-joan-pau.merida-ruiz
** File description:
** create_env_node
*/

#include "solver_lib.h"

void *create_last_node(s_stack *curr, int x, int y)
{
    curr->next = init_stack_node(x, y);
    curr->next->next = NULL;
    curr->next->previus = curr;
    return (curr->next);
}
