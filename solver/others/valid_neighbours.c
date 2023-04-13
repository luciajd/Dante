/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** valid_neighbours
*/

#include "solver_lib.h"

int valid_neighbours(s_info *info, s_stack *temp)
{
    int num = 0;

    if (temp->x < info->num_cols && info->map[temp->y][temp->x + 1] == '*') {
        num++;
    }
    if (temp->y < info->num_rows && info->map[temp->y + 1][temp->x] == '*') {
        num++;
    }
    if (temp->x > 0 && info->map[temp->y][temp->x - 1] == '*') {
        num++;
    }
    if (temp->y > 0 && info->map[temp->y - 1][temp->x] == '*') {
        num++;
    }
    return (num);
}
