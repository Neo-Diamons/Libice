##
## EPITECH PROJECT, 2022
## libice
## File description:
## Makefile
##

all:
	make -s -C ./lib/ice/
	make -s -C ./lib/list/

clean:
	make -s fclean -C ./lib/ice/
	make -s fclean -C ./lib/list/

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re

.SILENT:
