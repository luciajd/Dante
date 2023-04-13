/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** go_position
*/

#include "solver_lib.h"

s_stack *do_moves(s_info *info, s_stack *temp, bool *path)
{
    temp = go_right(info, temp, path);
    temp = go_down(info, temp, path);
    temp = go_left(info, temp, path);
    temp = go_up(info, temp, path);
    return (temp);
}
