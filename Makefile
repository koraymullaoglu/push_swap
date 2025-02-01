NAME	=	push_swap

SRCS	=	actions/push_ab.c actions/rev_rotate_ab.c actions/rotate_ab.c \
			actions/swap_ab.c ft_printf/libftprintf.a push_swap.c quicksort.c sorting_functions.c utils.c libft/libft.a


CC	=	gcc
RM	=	rm -f
FLAGS	= -Wall -Wextra -Werror

$(NAME): 
		make -C libft
		make -C ft_printf
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		make clean -C libft
		make clean -C ft_printf

fclean: clean	
		make fclean -C libft
		make fclean -C ft_printf
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re