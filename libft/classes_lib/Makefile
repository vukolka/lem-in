NAME=classes_lib.a
FLAGS=-Wall -Wextra -Werror -I ../includes/
OBJECTS =	new.o\
			init_classes.o\
			linked_list.o\
			queue.o room.o

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
$(OBJECTS) : %.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

.PHONY : clean fclean
clean :
	-rm $(OBJECTS)
fclean : clean
	-rm $(NAME)
re: fclean all
