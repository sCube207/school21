# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgrawp <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 12:30:48 by pgrawp            #+#    #+#              #
#    Updated: 2019/08/18 16:15:01 by pgrawp           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = -c -I ./includes/ft.h
SRC =  ./lib_srcs/*.c 
OBJ = *.o 
PROG = ./build_srcs/*.c

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror $(HEADER) $(SRC)
		ar rc $(NAME) $(OBJ)
		gcc -Wall -Wextra -Werror $(PROG) -L. -lft -o eval_expr 
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
	rm -f eval_expr
test: clean
	clear
	./eval_expr
re: fclean all
