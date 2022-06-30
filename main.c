/*
** EPITECH PROJECT, 2021
** main
** File description:
** main function
*/

#include "bsq.h"
#include <string.h>
#include "my.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    char *str;
    struct square_info info = {0, 0, 0, 0, 0};

    if (ac != 2)
        return (84);
    str = fs_read(av[1], &info);
    if (str == NULL)
        return (84);
    if (bsq(without_first_line(str, &info), &info) == 84)
        return (84);
    replace(without_first_line(str, &info), &info);
    free(str);
    return (0);
}
