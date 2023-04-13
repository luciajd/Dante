/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-solver-joan-pau.merida-ruiz
** File description:
** help
*/

#include "solver_lib.h"

int help(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        my_putstr("USAGE\n");
        my_putstr("    ./solver [path_maze] \n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("    Solver will look for any possible solution in the");
        my_putstr(" maze and then print the maze solved.\n");
        return (1);
    }
    return (0);
}
