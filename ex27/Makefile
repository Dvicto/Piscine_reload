NAME = ft_display_file
SRCS = ./srcs/*.c
HEADER = ./includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(SRCS) -I $(HEADER) -o $(NAME)

clean: 
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
	@rm -f includes/*.*.gch

re: fclean all