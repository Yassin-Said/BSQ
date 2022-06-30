/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** find the largest possibe square on a map
*/
#include "bsq.h"
#include "my.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int min(unsigned char *str, int i, struct square_info *info)
{
    int min = str[i - 1];

    if (i < info->SIZELI) {
        if (info->SIZEMAX == 0) {
            info->POS = i;
        }
        info->SIZEMAX = 1;
        return (0);
    }
    if (min > str[(i - info->SIZELI)]) {
        min = str[(i - info->SIZELI)];
    }
    if (min > str[(i - info->SIZELI) - 1]) {
        min = str[(i - info->SIZELI) - 1];
    }
    if (min + 1 > info->SIZEMAX) {
        info->SIZEMAX = min + 1;
        info->POS = i;
    }
    return (min);
}

int bsq(char *buffer, struct square_info *info)
{
    int i = 0;
    unsigned char *str = malloc(sizeof(char) * info->LEN);

    if (buffer == NULL || buffer[0] == '\0')
        return (84);
    while (buffer[i] != '\n')
        i++;
    i++;
    info->SIZELI = i;
    i = 0;
    while (buffer[i] != '\0') {
        if (buffer[i] == 'o') {
            str[i] = 0;
        } else if (buffer[i] == '.') {
            str[i] = min(str, i, info) + 1;
        }
        i++;
    }
    free(str);
    return (0);
}

int replace(char *buffer, struct square_info *info)
{
    int i = info->SIZEMAX;
    int j = info->SIZEMAX;

    if (buffer == NULL)
        return (84);
    while (i != 0) {
        while (j != 0) {
            buffer[info->POS] = 'x';
            info->POS--;
            j--;
        }
        j = info->SIZEMAX;
        i--;
        info->POS -= (info->SIZELI - info->SIZEMAX);
    }
    my_putstr(buffer);
    return (0);
}

char *without_first_line(char *str, struct square_info *info)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    info->LEN -= i;
    if (str[i] == '\0')
        return (str + i);
    return (str + i + 1);
}

char *fs_read(char const *filepath, struct square_info *info)
{
    int fd = 0;
    char *str;
    struct stat file_stat;

    if (stat(filepath, &file_stat) == -1)
        return NULL;
    info->LEN = file_stat.st_size;
    str = malloc(sizeof(char) * (file_stat.st_size + 1));
    fd = open(filepath, O_RDONLY);
    if (fd == -1 || str == NULL)
        return NULL;
    if (read(fd, str, file_stat.st_size) == -1) {
        close(fd);
        free(str);
        return NULL;
    }
    close(fd);
    return (str);
}
