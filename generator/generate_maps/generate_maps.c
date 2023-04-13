/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** generate_maps
*/

#include "generator_lib.h"

int generate_maps(s_info *info, s_stack *stack)
{
    if (generate_perfect(info, stack) == 84)
        return (84);
    if (info->perfect == false) {
        if (generate_imperfect(info) == 84)
            return (84);
    }
    last_lines_handler(info);
    info->map[info->y - 1][info->x - 1] = '*';
    return (0);
}
