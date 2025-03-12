NAME	=	fdf
SRC		=	$(shell find src -name "*.c")
OBJ		=	$(addprefix obj/, $(SRC:.c=.o))
INCLUDE	=	includes
CFLAGS	=	-Wall -Werror -Wextra

$(NAME):	$(OBJ)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

obj/%.o: %.c
	@mkdir -p $(dir $@)
	gcc $(CFLAGS) -I $(INCLUDE) -c $^ -o $@

re:	clean
	make $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf obj

.PHONY: clean fclean re