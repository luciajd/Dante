/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** do_moves
*/

#include "generator_lib.h"

s_stack *missing_moves(s_info *info, s_stack *temp, bool *moved, int rand)
{
    if (info->left_valid == true && rand == 2) {
        temp = go_left(info, temp);
        (*moved) = true;
    }
    if (info->up_valid == true && rand == 3) {
        temp = go_up(info, temp);
        (*moved) = true;
    }
    return (temp);
}

s_stack *do_moves(s_info *info, s_stack *temp)
{
    int rand = 0;
    bool moved = false;

    while (moved == false) {
        rand = rand_in_range(4);
        if (info->right_valid == true && rand == 0) {
            temp = go_right(info, temp);
            moved = true;
        }
        if (info->down_valid == true && rand == 1) {
            temp = go_down(info, temp);
            moved = true;
        }
        temp = missing_moves(info, temp, &moved, rand);
    }
    return (temp);
}
