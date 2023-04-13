/*
** EPITECH PROJECT, 2023
** B-CPE-200-BAR-2-1-dante-joan-pau.merida-ruiz
** File description:
** file
*/

#include "solver_lib.h"

static int open_file(s_file *file, char *path)
{
    struct stat info;

    stat(path, &info);
    file->fd = open(path, O_RDONLY);
    if (file->fd == -1)
        return (84);
    file->file_size = info.st_size;
    return (0);
}

static int close_file(s_file *file)
{
    if (close(file->fd) == -1)
        return (84);
    return (0);
}

static char *get_content(s_file *file)
{
    char *map = malloc(sizeof(char) * (file->file_size + 1));

    if (map == NULL)
        return (NULL);
    if ((file->read_size = read(file->fd, map, file->file_size)) == -1) {
        close_file(file);
        free(map);
        return (NULL);
    }
    return (map);
}

s_file *create_file(void)
{
    s_file *file = malloc(sizeof(s_file));

    if (file == NULL)
        return (NULL);
    file->fd = 0;
    file->read_size = 0;
    file->file_size = 0;
    file->open_file = &open_file;
    file->close_file = &close_file;
    file->get_content = &get_content;
    return (file);
}
