NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = ../libft
SRC_FILE = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c	\
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

SRC_EXTEND = ft_atoi_base.c \
	ft_atoi_piscine.c \
	ft_bubble_sort.c \
	ft_facto.c \
	ft_find_next_prime.c \
	ft_is_prime.c \
	ft_power.c \
	ft_put_nbr_base.c \
	ft_rev_int_tab.c \
	ft_rev_params.c \
	ft_sort_params.c \
	ft_sqrt.c \
	ft_str_is_alpha.c \
	ft_str_is_lowercase.c \
	ft_str_is_numeric.c \
	ft_str_is_printable.c \
	ft_str_is_uppercase.c \
	ft_strcapitalize.c \
	ft_strcat.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strlw.c \
	ft_strncat.c \
	ft_strncpy.c \
	ft_strstr.c \
	ft_strupcase.c \
	ft_swap.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILE)) $(SRC_EXTEND)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	rm -f $(OBJ)

update:
	git pull

#exec a retirer 
fclean: clean
	rm -f $(NAME)

re: fclean update all

.PHONY: clean fclean update re
