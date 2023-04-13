/*
** EPITECH PROJECT, 2023
** B-PSU-200-BAR-2-1-minishell1-joan-pau.merida-ruiz
** File description:
** frees a node in any position of the linked list
*/

#include "solver_lib.h"

int free_node(s_stack **head, s_stack **tail, s_stack *to_free)
{
    (*tail) = to_last_node((*tail));

    if (to_free == (*head))
        (*head) = to_free->next;
    else
        to_free->previus->next = to_free->next;
    if (to_free == (*tail))
        (*tail) = to_free->previus;
    else
        to_free->next->previus = to_free->previus;
    free(to_free);
    return (0);
}
