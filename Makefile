sources =		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c

objects	=		$(sources:.c=.o)

flags =			-Wall -Wextra -Werror

run : 			$(objects) main.o
				gcc $(flags) -o run $^

all	:			libft.a run

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
