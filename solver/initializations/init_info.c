/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** init_info
*/

#include "solver_lib.h"

s_info *init_info(void)
{
    s_info *info = malloc(sizeof(s_info));

    if (info == NULL)
        return (NULL);
    info->map = NULL;
    info->num_cols = 0;
    info->num_rows = 0;
    return (info);
}
