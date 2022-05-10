NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_substr.c ft_strjoin.c ft_putendl_fd.c ft_strmapi.c ft_strtrim.c ft_itoa.c ft_striteri.c ft_split.c
SRC2 = ft_lstnew.c ft_lstadd_front.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstsize.c
OBJ = $(SRC:.c=.o)
OBJ2 = $(SRC2:.c=.o)

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: .bonus

.bonus: $(OBJ) $(OBJ2)
	ar -rcs $(NAME) $(OBJ2)
	touch .bonus

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ2) .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all
