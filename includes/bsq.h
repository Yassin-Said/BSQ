/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** include bsq
*/

#ifndef SQUARE_INFO_H_
    #define SQUARE_INFO_H_

struct square_info {
    int POS;
    int SIZEMAX;
    int SIZECOL;
    int SIZELI;
    int LEN;
};

int replace(char *buffer, struct square_info *info);
int bsq(char *buffer, struct square_info *info);
int fs_open_file(char const *filepath, struct square_info *info);
char *fs_read(char const *filepath, struct square_info *info);
char *without_first_line(char *str, struct square_info *info);

#endif
