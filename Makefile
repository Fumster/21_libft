sources =		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

name =			libft.a

objects	=		$(sources:.c=.o)

flags =			-Wall -Wextra -Werror

all	:			$(name)

run : 			$(objects) main.o
					gcc $(flags) -o run $^   # `pkg-config --libs libbsd`


$(name)	:		$(objects)
					ar r libft.a $^

$(objects) :	$(sources) libft.h
					cc $(flags) -c $(sources)

main.o :		main.c libft.h
					cc $(flags) -c $<

clean :
					rm -rf $(objects) main.o

fclean :		clean
					rm -rf run libft.a

re:				fclean all

.PHONY: all re clean fclean
