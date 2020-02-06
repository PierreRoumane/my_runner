##
## EPITECH PROJECT, 2018
## Makefile libmy.a
## File description:
## Makefile that prepare the lib
##

SRC =		./my_put_nbr.c \
		./my_putchar.c \
		./put_to_norme.c \
		./my_str_compare.c \
		./add_multiplicator.c \
		./my_isneg.c \
		./my_putstr.c \
		./my_strlen.c \
		./my_getnbr.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I ../../include/

NAME	=	libmy.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../../

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:	fclean all
