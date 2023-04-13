/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** valid_neighbour
*/

#include "generator_lib.h"

bool neighbours_left(s_info *info, s_stack *curr)
{
    bool entered = false;

    if (curr->y > 1 && info->map[curr->y - 2][curr->x] != '*'
    && info->map[curr->y - 2][curr->x] != '\0') {
        info->up_valid = true;
        entered = true;
    }
    if (curr->y < (info->y - 2) && info->map[curr->y + 2][curr->x] != '*'
    && info->map[curr->y + 2][curr->x] != '\0') {
        info->down_valid = true;
        entered = true;
    }
    return (entered);
}

bool valid_neighbour(s_info *info, s_stack *curr)
{
    bool entered = false;

    if (curr->x < (info->x - 1) && info->map[curr->y][curr->x + 2] != '*'
    && info->map[curr->y][curr->x + 2] != '\0') {
        info->right_valid = true;
        entered = true;
    }
    if (curr->x > 1 && info->map[curr->y][curr->x - 2] != '*'
    && info->map[curr->y][curr->x - 2] != '\0') {
        info->left_valid = true;
        entered = true;
    }
    if (neighbours_left(info, curr) == true)
        entered = true;
    return (entered);
}
