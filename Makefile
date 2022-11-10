NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

INCLDS = includes

SRCS = ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c
	
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -I $(INCLDS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	rm -f $(OBJS)
	
fclean : clean 
	rm -f $(NAME)

re : fclean all

so:
	@$(CC) -fPIC $(CFLAGS) $(SRCS)
	@gcc -shared -o libft.so $(OBJS)

.PHONY : all clean fclean re
	