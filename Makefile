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
			ice_strlen.c		\
			ice_getnbr.c

OBJ		=	$(patsubst %.c, $(FILE_PATH)%.o, $(SRC))

NAME		=	libice.a
LIBS		=	ice
HEADERS		=	ice.h

TESTS_NAME	=	unit_tests
TESTS_PATH	=	./tests/test_
TESTS_SRC	=	$(addprefix $(TESTS_PATH), $(SRC))

CFLAGS		=       -g --coverage -I./include/
LDFLAGS		=       -L./lib/ -l$(LIBS) -lcriterion

CODING_STYLE	=	coding-style
CODING_REPORTS	=	coding-style-reports.log

TEMP_PATH	=	./$(TESTS_NAME)-test_
TEMP_SRC	=	$(addprefix $(TEMP_PATH), $(SRC))
TEMP_FILES	=	$(TESTS_SRC:.c=.c~)	\
			$(OBJ:.o=.c~)     	\
			$(TEMP_SRC:.c=.gcda)	\
			$(TEMP_SRC:.c=.gcno)	\
			$(OBJ:.o=.gcda)		\
			$(OBJ:.o=.gcno)		\
			$(CODING_REPORTS)	\
			$(TESTS_NAME)		\
			$(OBJ)

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

$(CODING_STYLE):
	$@ . .
	cat $(CODING_REPORTS)

clean:		$(OBJ)
	rm -f $(TEMP_FILES)

fclean: 	clean
	rm -f ./lib/$(NAME)

re:		fclean all

.PHONY:	all clean fclean re
