sources =		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c

objects	=		$(sources:.c=.o)

flags =			-Wall -Wextra -Werror

all	:			libft.a

run : 			$(objects) main.o
				gcc $(flags) -o run $^


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
