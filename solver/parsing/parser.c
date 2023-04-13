/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** parser
*/

#include "solver_lib.h"
#include <strings.h>

int check_errors(char *map, int index, int curr_width, int width)
{
    if (map[index] == '\n' && curr_width != width) {
        my_putstr("Invalid line lenght.\n");
        return (84);
    }
    if (map[index] != 'X' && map[index] != '*' && map[index] != '\n') {
        my_putstr("Invalid char in maze.\n");
        return (84);
    }
}

int map_error_handling(char *map)
{
    int index = 0;
    int width = 0;
    int curr_width = 0;

    if (map[0] != '*' || map[my_strlen(map) - 2] != '*') {
        my_putstr("Invalid maze.\n");
        return (84);
    }
    while (map[width] != '\n')
        width++;
    while (map[index]) {
        if (check_errors(map, index, curr_width, width) == 84)
            return (84);
        if (map[index] == '\n')
            curr_width = -1;
        curr_width++;
        index++;
    }
    return (0);
}

int parser(char **av, s_info *info)
{
    s_file *file = create_file();

    if (file->open_file(file, av[1]) == 84)
        return (84);
    char *map = file->get_content(file);
    if (file->close_file(file) == 84)
        return (84);
    if (map[file->read_size - 1] == '\n')
        map[file->read_size - 1] = '\0';
    else
        map[file->read_size] = '\0';
    free(file);
    if (map_error_handling(my_strcat(map, "\n")) == 84)
        return (84);
    info->map = my_str_to_word_array(map, '\n');
    while (map[info->num_cols] != '\n')
        info->num_cols++;
    info->num_rows = my_bsn_count(map);
    free(map);
    return (0);
}
