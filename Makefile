sources =		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c

objects	=		$(sources:.c=.o)

flags =			-Wall -Wextra -Werror

all	:			libft.a

run : 			$(objects) main.o
				gcc $(flags) -o run $^ `pkg-config --libs libbsd`


libft.a	:		$(objects)
				ar r libft.a $^

$(objects) :	$(sources) libft.h
				gcc $(flags) -c $(sources)

main.o :	main.c libft.h
					gcc $(flags) -c $<

clean :
				rm -rf $(objects) main.o

fclean :		clean
				rm -rf run libft.a

re:				fclean all

.PHONY: all re clean fclean
