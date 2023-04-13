/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** go_position
*/

#include "solver_lib.h"

s_stack *go_right(s_info *info, s_stack *temp, bool *path)
{
    if ((*path) == false && temp->x < info->num_cols
        && info->map[temp->y][temp->x + 1] == '*') {
        temp = create_last_node(temp, temp->x + 1, temp->y);
        (*path) = true;
    }
    return (temp);
}
