##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

CC      =       gcc -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio -lm -o

RM      =       rm -f

SRC     =      	main.c \
				$(wildcard src/*.c)

OBJ     =       $(SRC:.c=.o)

CFLAGS  =       -I./include/ -g3

NAME    =        my_runner

all:    $(NAME)

$(NAME):         $(OBJ)
	$(CC) $(NAME) $(OBJ)
	find -name "*.*~" -delete
	find -name "*~" -delete
	find -name "#*#" -delete

clean:
	$(RM) $(OBJ)

fclean:         clean
	find -name "*.o" -delete
	find -name "*.gc*" -delete
	$(RM) $(NAME)

re:     fclean all
