NAME = libft.a
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADER = ./includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRCS) -I $(HEADER)
	@ar rc  $(NAME) *.o

clean: 
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
	@rm -f includes/*.*.gch

re: fclean all