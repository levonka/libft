# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 12:12:25 by agottlie          #+#    #+#              #
#    Updated: 2018/11/28 12:51:24 by agottlie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC =	ft_*.c

OBJ = 	ft_*.o

INC = includes/*.h

all: $(NAME)

$(NAME): clean
	gcc $(FLAGS) -c $(SRC) -I $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	gcc -L. -lft o_main_1st_part.c
	/bin/rm -f $(OBJ) $(NAME)
	./a.out

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f a.out

re: fclean all
