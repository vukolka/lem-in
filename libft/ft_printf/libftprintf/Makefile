NAME=libftprintf.a
FLAGS=-Wall -Wextra -Werror
OBJECTS =	ft_lstdelone.o				ft_putnbr_fd.o		ft_strmapi.o \
ft_lstiter.o		ft_putstr.o			ft_strncat.o \
ft_atoi.o			ft_lstmap.o			ft_putstr_fd.o		ft_strncmp.o \
ft_bzero.o			ft_lstnew.o			ft_strcat.o			ft_strncpy.o \
ft_dict_add.o		ft_memalloc.o		ft_strchr.o			ft_strndup.o \
ft_dict_create.o	ft_memccpy.o		ft_strclr.o			ft_strnequ.o \
ft_dict_get.o		ft_memchr.o			ft_strcmp.o			ft_strnew.o \
ft_isalnum.o		ft_memcmp.o			ft_strcpy.o			ft_strnstr.o \
ft_isalpha.o		ft_memcpy.o			ft_strdel.o			ft_strrchr.o \
ft_isascii.o		ft_memdel.o			ft_strdup.o			ft_strsplit.o \
ft_isdigit.o		ft_memmove.o		ft_strequ.o			ft_strstr.o \
ft_isprint.o		ft_memset.o			ft_striter.o		ft_strsub.o \
ft_isspace.o		ft_putchar.o		ft_striteri.o		ft_strtrim.o \
ft_itoa.o			ft_putchar_fd.o		ft_strjoin.o		ft_strupper.o \
ft_itoa_base.o		ft_putendl.o		ft_strlcat.o		ft_tolower.o \
ft_lstadd.o			ft_putendl_fd.o		ft_strlen.o			ft_toupper.o \
ft_lstdel.o			ft_putnbr.o			ft_strmap.o

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