/*
** EPITECH PROJECT, 2023
** B-CPE-110-BAR-1-1-solver-joan-pau.merida-ruiz
** File description:
** selector
*/

#include "solver_lib.h"

int main(int ac, char **av)
{
    s_info *info = NULL;
    s_stack *stack = NULL;

    if (help(ac, av))
        return (0);
    if (ac != 2) {
        my_putstr("Invalid number of arguments.\n");
        return (84);
    }
    if ((info = init_info()) == NULL
        || (stack = init_stack_node(0, 0)) == NULL)
        return (84);
    if (parser(av, info) == 84)
        return (84);
    if (do_dfs(info, stack) == true)
        print_solved_maze(info);
    else
        my_putstr("no solution found");
    return (0);
}
