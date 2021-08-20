
.PHONY: clean fclean all re

NAME = mylib.a
CFLAGS = -Wall -Werror -Wextra -I. -c
FILES =	ft_strlen.c\
ft_strcmp.c\
ft_atoi.c\
ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memalloc.c\
ft_memccpy.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_strcat.c\
ft_strchr.c\
ft_strcpy.c\
ft_strdup.c\
ft_strlcat.c\
ft_strncat.c\
ft_strncmp.c\
ft_strncpy.c\
ft_strnstr.c\
ft_strrchr.c\
ft_strstr.c\
ft_tolower.c\
ft_toupper.c\
ft_memdel.c\
ft_strnew.c\
ft_strdel.c\
ft_strclr.c\
ft_striter.c\
ft_striteri.c\
ft_strmap.c\
ft_strmapi.c\
ft_strequ.c\
ft_strnequ.c\
ft_strsub.c\
ft_strjoin.c\
ft_strtrim.c\
ft_itoa.c\
ft_putstr.c\
ft_putnbr.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putendl.c\
ft_putchar.c\
ft_putnbr_fd.c\
ft_strsplit.c\
ft_lstnew.c\
ft_lstdelone.c\
ft_lstadd.c\
ft_lstiter.c\
ft_lstmap.c\
ft_lstdel.c

OBJ = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "mylib compiling..."
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): $(FILES)
	@echo "mylib objects compiling..."
	@gcc $(CFLAGS) $(FILES)

clean:
	@echo "mylib object files deleting..."
	@rm -f $(OBJ)

fclean: clean
	@echo "mylib library deleting..."
	@rm -f $(NAME)

re: fclean all