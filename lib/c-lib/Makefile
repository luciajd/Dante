##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC	=	src/my_putchar.c \
		src/my_putstr.c \
		src/my_strlen.c \
		src/my_strlen_mod.c \
		src/my_dictionary_length.c \
		src/my_strcmp.c \
		src/my_str_to_word_arr.c \
		src/my_get_nbr.c \
		src/my_put_nbr.c \
		src/my_strcpy.c \
		src/my_strcmp.c \
		src/my_strdup.c \
		src/str_cleaner.c \
		src/my_bsn_count.c \
		src/my_strcat.c \
		src/is_int.c \
		src/my_cut.c

OBJ	=	$(SRC:.c=.o)

CFLAGS = -I . -I ./include/

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f ./src/*.o
	cp ./include/c_lib.h ../../solver/include/
	cp ./include/c_lib.h ../../generator/include/

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f ../../include/c_lib.h
	rm -f ./libmy.a

fclean: clean
	rm -f ../../$(NAME)
	rm -f $(NAME)
	rm -f ../../solver/include/c_lib.h
	rm -f ../../generator/include/c_lib.h

re:	fclean all
