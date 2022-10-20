##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

FILE_PATH	=	./lib/ice/
SRC		=	ice_putchar.c		\
			ice_putstr.c		\
			ice_sint.c		\
			ice_strlen.c

OBJ		=	$(patsubst %.c, $(FILE_PATH)%.o, $(SRC))

NAME		=	libice.a
LIBS		=	ice
HEADERS		=	ice.h

TESTS_NAME	=	unit_tests
TESTS_PATH	=	./tests/test_
TESTS_SRC	=	$(addprefix $(TESTS_PATH), $(SRC))

CFLAGS		=       -g --coverage -I./include/
LDFLAGS		=       -L./lib/ -l$(LIBS) -lcriterion

all:		$(NAME)
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
	ar rc $@ $(OBJ)
	mv ./$@ ./lib/$@

$(TESTS_NAME):	$(NAME) $(OBJ)
	gcc $(CFLAGS) -o $@ $(TESTS_SRC) $(LDFLAGS)
	./$@
	gcovr --exclude tests/ --branches

clean:		$(OBJ)
	rm -f $(OBJ)

fclean: 	clean
	rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
