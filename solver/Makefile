##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

NAME =	solver

SRC =	main.c \
		dfs/my_dfs.c \
		dfs/moves/do_moves.c \
		dfs/moves/go_down.c \
		dfs/moves/go_left.c \
		dfs/moves/go_right.c \
		dfs/moves/go_up.c \
		others/help.c \
		others/valid_neighbours.c \
		initializations/init_info.c \
		initializations/init_stack_node.c \
		nodes/create_last_node.c \
		nodes/free_node.c \
		nodes/node_counter.c \
		nodes/to_last_node.c \
		parsing/file/file.c \
		parsing/parser.c \
		prints/print_solved_maze.c

OBJ = $(SRC:.c=.o)

LIBMY = -C ../lib/c-lib

LIBR = -L ../lib/c-lib/ -lmy

CFLAGS += -I ./include/ -I ../lib/c-lib/include -g3

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIBR)
	rm -f *.o
	rm -f dfs/*.o
	rm -f dfs/moves/*.o
	rm -f initializations/*.o
	rm -f nodes/*.o
	rm -f others/*.o
	rm -f parsing/*.o
	rm -f parsing/file/*.o
	rm -f prints/*.o

make_lib:
	$(MAKE) $(LIBMY)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -f coding-style-reports.log
	make fclean -C ../lib/c-lib/

re: fclean all
