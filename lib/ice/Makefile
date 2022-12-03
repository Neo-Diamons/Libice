##
## EPITECH PROJECT, 2022
## libice
## File description:
## Makefile
##

NAME	=	libice.a

CC		=	gcc
CFLAGS	=	-I./../../include/ -Wall -Wextra

all:		$(NAME)

$(NAME):
	make -C ./int/
	make -C ./output/
	make -C ./string/

clean:
	make fclean -C ./int/
	make fclean -C ./output/
	make fclean -C ./string/

fclean:		clean
	rm -f ./../../$(NAME)

re:			fclean all

.PHONY:		all clean fclean re

.SILENT:
