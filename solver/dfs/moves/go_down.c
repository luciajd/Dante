/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** go_position
*/

#include "solver_lib.h"

s_stack *go_down(s_info *info, s_stack *temp, bool *path)
{
    if ((*path) == false && temp->y < info->num_rows
        && info->map[temp->y + 1][temp->x] == '*') {
        temp = create_last_node(temp, temp->x, temp->y + 1);
        (*path) = true;
    }
    return (temp);
}
