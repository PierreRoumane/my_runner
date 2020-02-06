##
## EPITECH PROJECT, 2019
## CPool_lib_2019
## File description:
## Makefile
##

SRC	=	src/main.c \
		src/creation_tools.c \
		src/game_loop.c \
		src/cleanup.c \
		src/sprite_management.c \
		src/creation_modifiers.c \
		src/creation_scenery.c

NAME	=	my_runner

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I include/ -g

LDFLAGS	=	-L lib/my/ -lmy

RM 		=	@find . \( -name "*.o" -o -name "*~" \) -delete

all:	lib_compile $(NAME)

lib_compile:
	@make -C lib/my/ --no-print-directory

$(NAME): $(OBJ)
	gcc -o $(NAME) -l csfml-graphics -l csfml-audio -l csfml-window -l csfml-system $(OBJ) $(LDFLAGS)
	$(RM)

clean:
	@make clean -C lib/my/ --no-print-directory
	$(RM)

fclean: clean
	$(RM)
	@make fclean -C lib/my/ --no-print-directory

re:	fclean all
