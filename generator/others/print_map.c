/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** print_map
*/

#include "generator_lib.h"

void print_map(s_info *info)
{
    int line = 0;

    while (info->map[line + 1]) {
        write(1, info->map[line], info->x);
        my_putstr("\n");
        line++;
    }
    write(1, info->map[line], info->x);
}
