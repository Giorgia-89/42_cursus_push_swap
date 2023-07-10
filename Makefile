NAME = push_swap

SRC = error_checks\
		create_stack\
		find\
		ft_atoi\
		ft_isdigit\
		ft_strlen\
		push_actions\
		rev_actions\
		rot_actions\
		sort_five\
		sort_long\
		sort_numbers\
		swap_actions\

CC = cc 
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
			$(CC) $(CFLAGS) $(SRC:=.o) push_swap.c -fsanitize=address -o $(NAME) 
clean:
	$(RM)	$(SRC:=.o) $(BONUS:=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)