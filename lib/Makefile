##
## EPITECH PROJECT, 2023
## libice
## File description:
## Makefile
##

NAME		:=	libice.a

DIR_ICE		:=	./ice/

DIR_INT		:=	$(addprefix $(DIR_ICE), ./int/)
SRC_INT		:=	ice_atoi.c		\
				ice_itoa.c		\
				ice_intlen.c
OBJ_INT		:=	$(patsubst %.c, $(DIR_INT)%.o, $(SRC_INT))

DIR_OUT		:=	$(addprefix $(DIR_ICE), ./output/)
SRC_OUT		:=	ice_perror.c	\
				ice_puts.c
OBJ_OUT		:=	$(patsubst %.c, $(DIR_OUT)%.o, $(SRC_OUT))

DIR_STR		:=	$(addprefix $(DIR_ICE), ./string/)
SRC_STR		:=	ice_strcat.c	\
				ice_strcmp.c	\
				ice_strcpy.c	\
				ice_strlen.c	\
				ice_strncat.c	\
				ice_strncpy.c
OBJ_STR		:=	$(patsubst %.c, $(DIR_STR)%.o, $(SRC_STR))

DIR_LIST	:=	./list/
SRC_LIST	:=	list_add_node.c		\
				list_add.c			\
				list_create.c		\
				list_destroy.c		\
				list_get.c			\
				list_pop.c			\
				list_pop_node.c		\
				list_remove.c		\
				list_remove_node.c	\
				list_sort.c
OBJ_LIST	:=	$(patsubst %.c, $(DIR_LIST)%.o, $(SRC_LIST))

OBJS		:=	$(OBJ_INT) $(OBJ_OUT) $(OBJ_STR) $(OBJ_LIST)

RM			:=	rm -f

CC			:=	gcc
CLINKER		:=	ar rc
CFLAGS		:=	-I./../include/ -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CLINKER) $(NAME) $(OBJS)

debug:		CFLAGS += -g
debug:		re

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
