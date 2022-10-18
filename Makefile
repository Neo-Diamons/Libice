##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##


SRC	=

OBJ	=	$(SRC:.c=.o)

NAME	=	libice.a
#HEADERS	=	ice.h

all:	$(NAME)
	@echo -e "\033[96m"
	@echo "#####################################################"
	@echo "#                                                   #"
	@echo "#  #      #######  #####   #######   #####   #####  #"
	@echo "#  #         #     #    #     #     #       #       #"
	@echo "#  #         #     #####      #     #       #####   #"
	@echo "#  #         #     #    #     #     #       #       #"
	@echo "#  #####  #######  #####   #######   #####   #####  #"
	@echo "#                                                   #"
	@echo "#####################################################"
	@echo -e "\033[0m"

$(NAME):	$(OBJ)
	ar rc $(NAME) $(SRC)
	rm -f $(OBJ)

	cp ./$(NAME) ./../
	cp ./$(HEADERS) ./../../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
