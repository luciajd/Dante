/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** init_info
*/

#include "generator_lib.h"

s_info *init_info(int ac, char **av)
{
    s_info *info = malloc(sizeof(s_info));

    if (info == NULL)
        return (NULL);
    info->perfect = false;
    if (ac == 4 && (my_strcmp("perfect", av[3]) == 0))
        info->perfect = true;
    info->x = my_get_nbr(av[1]);
    info->y = my_get_nbr(av[2]);
    info->right_valid = false;
    info->up_valid = false;
    info->left_valid = false;
    info->down_valid = false;
    init_map(info);
    return (info);
}
