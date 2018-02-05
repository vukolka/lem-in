NAME=libftprintf.a
FLAGS=-Wall -Wextra -Werror
OBJECTS = ft_printf/ft_printf.o ft_printf/ft_conncat.o ft_printf/ft_format_d.o \
ft_printf/get_right_format.o ft_printf/get_modificator.o ft_printf/get_func_dict.o \
ft_printf/ft_format_x.o ft_printf/ft_format_o.o ft_printf/ft_format_s.o ft_printf/ft_format_c.o \
ft_printf/ft_format_p.o ft_printf/ft_format_u.o ft_printf/apply_format.o \
ft_printf/parse_modifiers.o ft_printf/proccess_format.o  ft_printf/apply_flags.o \
ft_printf/ft_format_percent.o ft_printf/apply_flags2.o

all: $(NAME)

$(OBJECTS) : %.o: %.c
	$(CC) -g -c $(FLAGS) -I libftprintf/ -I ft_printf/ $< -o $@
	

$(NAME): $(OBJECTS)
	$(MAKE) -C libftprintf/
	ar rc libftprintf.a $(OBJECTS) libftprintf/*.o

clean:
	$(MAKE) -C libftprintf/ clean
	-rm $(OBJECTS)
fclean : clean
	$(MAKE) -C libftprintf/ fclean
	-rm -v $(NAME)
re: fclean all

