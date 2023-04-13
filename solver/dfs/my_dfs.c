/*
** EPITECH PROJECT, 2023
** B-CPE-110-BAR-1-1-solver-joan-pau.merida-ruiz
** File description:
** selector
*/

#include "solver_lib.h"

bool remove_node(s_info *info, bool path, s_stack **head_stack, s_stack **temp)
{
    while (valid_neighbours(info, (*temp)) == 0) {
        if ((*temp)->x == 0 && (*temp)->y == 0)
            return (false);
        info->map[(*temp)->y][(*temp)->x] = '_';
        free_node(head_stack, temp, (*temp));
    }
    return (true);
}

s_stack *do_logic(s_stack *temp, s_info *info, s_stack *head_stack, bool *path)
{
    if (temp->x >= 0 && temp->x <= info->num_cols
        && temp->y >= 0 && temp->y <= info->num_rows) {
        (*path) = false;
        temp = do_moves(info, temp, path);
        if ((*path) == false
        && remove_node(info, (*path), &head_stack, &temp) == false) {
            return (NULL);
        }
    }
    return (temp);
}

bool do_dfs(s_info *info, s_stack *head_stack)
{
    bool path = false;
    s_stack *temp = head_stack;
    temp = create_last_node(temp, 0, 0);

    while (node_counter(head_stack) > 0) {
        info->map[temp->y][temp->x] = 'o';
        if (temp->x == info->num_cols - 1 && temp->y == info->num_rows)
            return (true);
        if ((temp = do_logic(temp, info, head_stack, &path)) == NULL)
            return (false);
    }
    return (false);
}
