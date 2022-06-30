/*
** EPITECH PROJECT, 2021
** tests_for_bsq
** File description:
** testing all premade map
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "bsq.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(bsq, test_34_137_filled, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_34_137_filled", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_34_137_filled", &info));
}

Test(bsq, test_34_137_empty, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_34_137_empty", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_34_137_empty", &info));
}

Test(bsq, test_34_137_with_obstacles_25pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_34_137_with_obstacles_25pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_34_137_with_obstacles_25pc", &info));
}

Test(bsq, test_34_137_with_obstacles_50pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_34_137_with_obstacles_50pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_34_137_with_obstacles_50pc", &info));
}
Test(bsq, test_34_137_with_obstacles_75pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_34_137_with_obstacles_75pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_34_137_with_obstacles_75pc", &info));
}
Test(bsq, test_97_21_empty, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_97_21_empty", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_97_21_empty", &info));
}
Test(bsq, test_97_21_filled, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_97_21_filled", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_97_21_filled", &info));
}
Test(bsq, test_97_21_with_obstacles_25pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_97_21_with_obstacles_25pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_97_21_with_obstacles_25pc", &info));
}
Test(bsq, test_97_21_with_obstacles_50pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_97_21_with_obstacles_50pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_97_21_with_obstacles_50pc", &info));
}
Test(bsq, test_97_21_with_obstacles_75pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_97_21_with_obstacles_75pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_97_21_with_obstacles_75pc", &info));
}
Test(bsq, test_100_100, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_100_100", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_100_100", &info));
}
Test(bsq, test_187_187_empty, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_187_187_empty", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_187_187_empty", &info));
}
Test(bsq, test_187_187_filled, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_187_187_filled", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_187_187_filled", &info));
}
Test(bsq, test_187_187_with_obstacles_25pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_187_187_with_obstacles_25pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_187_187_with_obstacles_25pc", &info));
}
Test(bsq, test_187_187_with_obstacles_50pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_187_187_with_obstacles_50pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_187_187_with_obstacles_50pc", &info));
}

Test(bsq, test_187_187_with_obstacles_75pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_187_187_with_obstacles_75pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_187_187_with_obstacles_75pc", &info));
}
Test(bsq, test_200_200, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_200_200", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_200_200", &info));
}
Test(bsq, test_500_500, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_500_500", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_500_500", &info));
}
Test(bsq, test_500_500_2, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_500_500_2", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_500_500_2", &info));
}Test(bsq, test_500_500_3, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_500_500_3", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_500_500_3", &info));
}
Test(bsq, test_1000_1000, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_1000_1000", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_1000_1000", &info));
}
Test(bsq, test_1000_1000_2, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_1000_1000_2", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_1000_1000_2", &info));
}
Test(bsq, test_2000_2000, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_2000_2000", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_2000_2000", &info));
}

Test(bsq, test_5000_5000, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_5000_5000", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_5000_5000", &info));
}

Test(bsq, test_10000_10000, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_10000_10000", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_10000_10000", &info));
}

Test(bsq, test_empty_corners, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_empty_corners", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_empty_corners", &info));
}

Test(bsq, test_filled_corners, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_filled_corners", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_filled_corners", &info));
}

Test(bsq, test_one_column_with_obstacles_25pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_one_column_with_obstacles_25pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_one_column_with_obstacles_25pc", &info));
}

Test(bsq, test_one_column_with_obstacles_50pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_one_column_with_obstacles_50pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_one_column_with_obstacles_50pc", &info));
}

Test(bsq, test_one_column_with_obstacles_75pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_one_column_with_obstacles_75pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_one_column_with_obstacles_75pc", &info));
}

Test(bsq, test_one_empty_box, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_one_empty_box", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_one_empty_box", &info));
}
Test(bsq, test_one_empty_column, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_one_empty_column", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_one_empty_column", &info));
}

Test(bsq, test_one_empty_line, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_one_empty_line", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_one_empty_line", &info));
}

Test(bsq, test_one_filled_box, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_one_filled_box", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_one_filled_box", &info));
}

Test(bsq, test_one_filled_line, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_one_filled_line", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_one_filled_line", &info));
}

Test(bsq, test_one_line_with_obstacles_50pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_one_line_with_obstacles_50pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_one_line_with_obstacles_50pc", &info));
}
Test(bsq, test_one_line_with_obstacles_75pc, .init=redirect_all_stdout)
{
    struct square_info info = {0, 0, 0, 0, 0};
    char *str;
    str = fs_read("mouli_maps/intermediate_map_one_line_with_obstacles_75pc", &info);
    bsq(without_first_line(str, &info), &info);
    replace(without_first_line(str, &info), &info);
    cr_assert_stdout_eq_str(fs_read("mouli_maps_solved/intermediate_map_one_line_with_obstacles_75pc", &info));
}
