##
## EPITECH PROJECT, 2023
## libice
## File description:
## Makefile
##

NAME		:=	libice.a

DIR			:=	./
SRC			:=

DIR_ICE		:=	./ice/

DIR			+=	$(addprefix $(DIR_ICE), ./int/)
SRC			+=	$(addprefix $(lastword $(DIR)),\
				ice_atoi.c		\
				ice_itoa.c		\
				ice_intlen.c	\
				)

DIR			+=	$(addprefix $(DIR_ICE), ./output/)
SRC			+=	$(addprefix $(lastword $(DIR)),\
				ice_perror.c	\
				ice_puts.c		\
				)

DIR			+=	$(addprefix $(DIR_ICE), ./string/)
SRC			+=	$(addprefix $(lastword $(DIR)),\
				ice_strcat.c	\
				ice_strcmp.c	\
				ice_strcpy.c	\
				ice_strlen.c	\
				ice_strncat.c	\
				ice_strncpy.c	\
				)

DIR			+=	./list/
SRC			+=	$(addprefix $(lastword $(DIR)),\
				list_add_node.c		\
				list_add.c			\
				list_create.c		\
				list_destroy.c		\
				list_destroy_node.c	\
				list_get.c			\
				list_pop.c			\
				list_pop_node.c		\
				list_remove.c		\
				list_remove_node.c	\
				list_sort.c			\
				)

DIR_TEST	:=	../tests/
SRC_TEST	:=	$(addprefix $(DIR_TEST),\
				test_int.c			\
				test_list.c			\
				)

ROOT_OBJ	:=	./.obj/
DIR_OBJ		:=	$(addprefix $(ROOT_OBJ), $(DIR))
OBJ			:=	$(patsubst %.c, $(ROOT_OBJ)%.o, $(SRC))

UNIT_TEST	:=	./unit_test

TOTAL_SRC	:=	$(words $(OBJ))
TOTAL_OBJ	:=	0

RM			:=	rm -rf

CC			:=	gcc
CLINKER		:=	ar rc
CFLAGS		:=	-I./../include/ -Wall -Wextra

all:				$(DIR_OBJ) $(NAME)

$(DIR_OBJ):
	@echo 'Creating directory: $(ROOT_OBJ)'
	mkdir -p $(DIR_OBJ)

$(ROOT_OBJ)%.o:		%.c
	$(eval TOTAL_OBJ=$(shell echo $$(($(TOTAL_OBJ)+1))))
	@./progress_bar.sh $(TOTAL_OBJ) $(TOTAL_SRC)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):			$(OBJ)
	@echo -e '\nBuilding target: $@'
	$(CLINKER) $(NAME) $(OBJ)
	@echo -e 'SRC files compiled: $(TOTAL_OBJ)'

$(UNIT_TEST):		CFLAGS += -lcriterion --coverage
$(UNIT_TEST):		fclean
	@echo -e '\nBuilding target: $@'
	$(CC) $(CFLAGS) $(SRC) $(SRC_TEST) -o $(UNIT_TEST)
	@echo -e 'SRC files compiled: $(TOTAL_SRC)'

test_run:			$(UNIT_TEST)
	@echo -e '\nRunning unit tests:'
	./$(UNIT_TEST)

test_coverage:		test_run
	@echo -e '\nGenerating coverage report:'
	gcovr --exclude tests/


debug:				CFLAGS += -g
debug:				re

clean:
	@echo 'Cleaning directory: $(ROOT_OBJ)'
	$(RM) $(ROOT_OBJ)
	@echo 'Cleaning directory: ./'
	$(RM) *.gcda
	$(RM) *.gcno

fclean:				clean
	@echo 'Cleaning target: $(NAME)'
	$(RM) $(NAME)
	@echo 'Cleaning target: $(UNIT_TEST)'
	$(RM) $(UNIT_TEST)

re:					fclean all

.PHONY:				all clean fclean re
