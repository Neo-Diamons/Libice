##
## EPITECH PROJECT, 2022
## libice
## File description:
## Makefile
##

NAME	=	string
SRC		=	ice_strlen.c	\
			ice_strcpy.c	\
			ice_strncpy.c	\
			ice_strcat.c	\
			ice_strncat.c
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
