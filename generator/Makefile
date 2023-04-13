##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

NAME =	generator

SRC =	main.c \
		others/help.c \
		others/rand_in_range.c \
		others/last_lines_handler.c \
		others/print_map.c \
		initializations/init_map.c \
		initializations/init_info.c \
		initializations/init_stack_node.c \
		error_handling/error_handler.c \
		generate_maps/generate_maps.c \
		generate_maps/imperfect/generate_imperfect.c \
		generate_maps/perfect/generate_perfect.c \
		generate_maps/perfect/moves/do_moves.c \
		generate_maps/perfect/moves/go_down.c \
		generate_maps/perfect/moves/go_left.c \
		generate_maps/perfect/moves/go_up.c \
		generate_maps/perfect/moves/go_right.c \
		neighbours/valid_neighbour.c \
		nodes/create_last_node.c \
		nodes/free_node.c \
		nodes/node_counter.c \
		nodes/to_last_node.c \

OBJ = $(SRC:.c=.o)

LIBMY = -C ../lib/c-lib

LIBR = -L ../lib/c-lib/ -lmy

CFLAGS += -I ./include/ -I ../lib/c-lib/include -g3

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIBR)
	rm -f *.o
	rm -f others/*.o
	rm -f initializations/*.o
	rm -f error_handling/*.o
	rm -f generate_maps/*.o
	rm -f neighbours/*.o
	rm -f generate_maps/imperfect/*.o
	rm -f generate_maps/perfect/*.o
	rm -f generate_maps/perfect/moves/*.o
	rm -f nodes/*.o

make_lib:
	$(MAKE) $(LIBMY)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	make fclean -C ../lib/c-lib/

re: fclean all
