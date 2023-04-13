/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** last_lines_handler
*/

#include "generator_lib.h"

void last_lines_handler(s_info *info)
{
    int y = 0;
    int x = 0;
    bool X_handler = false;

    if ((info->x % 2) == 0) {
        while (info->map[info->y - 1][x]) {
            info->map[info->y - 1][x] = '*';
            x++;
            x++;
        }
        X_handler = true;
    }
    if (X_handler == false && (info->y % 2) == 0) {
        while (info->map[y]) {
            info->map[y][info->x - 1] = '*';
            y = y + 2;
        }
    }
}
