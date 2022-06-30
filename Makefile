##
## EPITECH PROJECT, 2021
## makefile
## File description:
## compile all program
##

IFLAG   =       -I ./includes

MFLAG	=	tests/tests_for_bsq.c

SRC	=	bsq.c	\
		lib/my/my_putstr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_strlen.c
CFLAG	=	-W -Werror -Wextra -Wall

TFLAG	=	-lcriterion --coverage

NAME	=	bsq

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(IFLAG) main.c $(SRC) $(CFLAG) $(LFLAG)

clean:
	rm -f *~

fclean:	clean
	rm -f $(NAME)	\
	rm -f bsq_tests	\
	rm -f *.gcno	\
	rm -f *.gcda

val:
	gcc -o $(NAME) -I ./includes/ main.c $(SRC) $(IFLAG) $(CFLAG) -g3

tests_run:
	gcc -o unit_test $(MFLAG) -I ./includes/ $(SRC) $(CFLAG) $(TFLAG)
	./unit_test

re: fclean all
