#!/usr/bin/env bash
##
## EPITECH PROJECT, 2021
## build
## File description:
## build the lib
##
gcc -c *.c
ar rc libmy.a *.o
