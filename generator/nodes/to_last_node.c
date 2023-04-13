/*
** EPITECH PROJECT, 2023
** B-PSU-200-BAR-2-1-minishell1-joan-pau.merida-ruiz
** File description:
** to_last_node
*/

#include "generator_lib.h"

void *to_last_node(s_stack *curr)
{
    if (curr == NULL)
        return (curr);
    while (curr->next != NULL)
        curr = curr->next;
    return (curr);
}
