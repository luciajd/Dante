##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

LIBMY = -C lib/c-lib

solver = -C solver/

generator = -C generator/

LIBR = -L lib/c-lib/ -lmy

all: make_dirs

make_dirs:
	$(MAKE) $(LIBMY)
	$(MAKE) $(solver)
	$(MAKE) $(generator)

clean:
	make clean -C ./solver/
	make clean -C ./generator/

fclean: clean
	make fclean -C ./solver/
	make fclean -C ./generator/
	rm -f coding-style-reports.log

re: fclean all
