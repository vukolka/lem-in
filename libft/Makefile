NAME=libftprintf.a
FLAGS=-Wall -Wextra -Werror -I includes/
OBJECTS = get_next_line/get_next_line.o

all: $(NAME)

$(OBJECTS) : %.o: %.c
	$(CC) -g -c $(FLAGS) -I libftprintf/ -I ft_printf/ $< -o $@
	

$(NAME): $(OBJECTS)
	$(MAKE) -C ft_printf
	$(MAKE) -C classes_lib
	ar rc libft.a $(OBJECTS) classes_lib/classes_lib.a ft_printf/libftprintf.a 

clean:
	$(MAKE) -C ft_printf/ clean
	$(MAKE) -C classes_lib/ clean

	-rm $(OBJECTS)
fclean : clean
	$(MAKE) -C ft_printf/ fclean
	-rm -v $(NAME)
re: fclean all



