/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** print_solved_maze
*/

#include "solver_lib.h"

void print_solved_maze(s_info *info)
{
    int y = 0;
    int x = 0;
    int line = 0;

    while (info->map[y]) {
        while (info->map[y][x]) {
            info->map[y][x] = (info->map[y][x] == '_' ? '*' : info->map[y][x]);
            x++;
        }
        x = 0;
        y++;
    }
    while (info->map[line + 1]) {
        write(1, info->map[line], info->num_cols);
        write(1, "\n", 1);
        line++;
    }
    write(1, info->map[line], info->num_cols);
}
