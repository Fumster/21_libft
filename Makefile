sources =		ft_isalpha.c ft_isdigit.c ft_isalnum.c

objects	=		$(sources:.c=.o)

flags =			-Wall -Wextra -Werror

run : 			$(objects) isalnum_main.o
				gcc $(flags) -o run $^

all	:			libft.a

libft.a	:		$(objects)
				ar r libft.a $^

$(objects) :	$(sources) libft.h
				gcc $(flags) -c $(sources)

isalnum_main.o :	isalnum_main.c libft.h
					gcc $(flags) -c $<

clean :
				rm -rf $(objects) isalnum_main.o

fclean :		clean
				rm -rf run libft.a

re:				fclean all

.PHONY: all re clean fclean
