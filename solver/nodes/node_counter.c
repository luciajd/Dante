/*
** EPITECH PROJECT, 2023
** B-PSU-200-BAR-2-1-minishell1-joan-pau.merida-ruiz
** File description:
** node_counter
*/

#include "solver_lib.h"

int node_counter(s_stack *curr)
{
    int count = 0;

    if (curr == NULL)
        return (count);
    while (curr->next != NULL) {
        curr = curr->next;
        count++;
    }
    return (count);
}
