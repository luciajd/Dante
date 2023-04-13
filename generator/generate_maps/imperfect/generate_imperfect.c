/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** generate_maps
*/

#include "generator_lib.h"

int change_char(s_info *info, int *to_replace, int *x, int *y)
{
    int rand_num = rand_in_range(3);

    while (info->map[(*y)][(*x)] != 'X' && (*x) < (info->x - 1))
        (*x)++;
    if (rand_num == 0) {
        info->map[(*y)][(*x)] = '*';
        (*to_replace)--;
    }
    return (0);
}

int generate_imperfect(s_info *info)
{
    int y = 0;
    int x = 0;
    int to_replace = 0;

    if (info->x < info->y)
        to_replace = info->x;
    else
        to_replace = info->y;
    while (y < (info->y - 1)) {
        while (x < (info->x - 1) && to_replace != 0) {
            change_char(info, &to_replace, &x, &y);
            x++;
        }
        x = 0;
        y++;
    }
}
