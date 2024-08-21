COMPILER = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap

SRC =	operators/operators_main.c operators/push.c \
		operators/reverse_rotate.c operators/rotate.c \
		operators/swap.c parsing/check_args.c parsing/check_doubles.c \
		parsing/check_number.c parsing/check_sorted.c \
		parsing/split.c sorting/indexing.c sorting/sort_3.c sorting/sort_4.c \
		sorting/sort_5.c sorting/sort.c sorting/sort_all.c \
		sorting/sort_utils.c sorting/sort_utils_2.c\
		free/free.c\
		utils/main.c\
		main.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	$(COMPILER) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf push_swap
re:	fclean all

.SECONDARY: $(OBJ)