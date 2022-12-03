##
## EPITECH PROJECT, 2022
## libice/int
## File description:
## Makefile
##

NAME	=	int
SRC		=	ice_intlen.c	\
			ice_itoa.c		\
			ice_atoi.c
OBJ		=	$(SRC:.c=.o)

CC		=	gcc
CFLAGS	=	-I./../../../include/ -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc ./../../libice.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re

.SILENT:
