NAME=lem-in
FLAGS=-Wall -Wextra -Werror -I libft/includes/ -I libft/classes_lib/
OBJECTS =	src/ft_print_error.o	src/main.o				src/parsing.o			src/room_lib.o \
			src/mark_map.o			src/parsing_add.o	src/solve.o

all: $(NAME)

$(OBJECTS) : %.o: %.c
	$(CC) -g -c $(FLAGS) $< -o $@
	

$(NAME): $(OBJECTS)
	$(MAKE) -C libft/
	gcc -o $(NAME) $(FLAGS) $(OBJECTS) libft/get_next_line/get_next_line.o libft/classes_lib/classes_lib.a libft/ft_printf/libftprintf.a -lmlx -framework OpenGL -framework AppKit
	cmake lemin_visualization/CMakeLists.txt
	$(MAKE) -C lemin_visualization/
	cp lemin_visualization/visu-hex .
clean:
	$(MAKE) -C libft/ clean
	-rm $(OBJECTS)
fclean : clean
	$(MAKE) -C libft/ fclean
	-rm -v $(NAME)
re: fclean all



