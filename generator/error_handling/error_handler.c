/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** error_handler
*/

#include "generator_lib.h"

int error_handler(int ac, char **av)
{
    if (ac > 4 || ac < 3) {
        my_putstr("Error! Invalid number of arguments.\n");
        return (84);
    }
    if ((is_int(av[1]) == false || is_int(av[2]) == false)
    || (my_get_nbr(av[1]) == 0 || my_get_nbr(av[2]) == 0)) {
        my_putstr("Error! You must give valid values.\n");
        return (84);
    }
    if (ac == 4 && (my_strcmp("perfect", av[3]) == -1
    && my_strcmp("imperfect", av[3]) == -1)) {
        my_putstr("Error! Invalid type of map.\n");
        return (84);
    }
    if (my_get_nbr(av[1]) < 0 || my_get_nbr(av[2]) < 0) {
        my_putstr("Error! You must give positive values.\n");
        return (84);
    }
    return (0);
}
