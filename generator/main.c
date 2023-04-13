/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "generator_lib.h"

int main (int ac, char **av)
{
    s_info *info = NULL;
    s_stack *stack = NULL;

    srand(time(NULL));

    if (help(ac, av))
        return (0);
    if (error_handler(ac, av) == 84)
        return (84);
    if ((info = init_info(ac, av)) == NULL
        || (stack = init_stack_node(0, 0)) == NULL)
        return (84);
    if (generate_maps(info, stack) == 84)
        return (84);
    print_map(info);
    return (0);
}
