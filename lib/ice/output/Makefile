##
## EPITECH PROJECT, 2022
## libice/output
## File description:
## Makefile
##

NAME	=	output
SRC		=	ice_perror.c	\
			ice_puts.c
OBJ		=	$(SRC:.c=.o)

CC		=	gcc
CFLAGS	=	-I./../../../include/ -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc ./../../../libice.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re

.SILENT:
