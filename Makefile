# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/15 21:27:34 by ecelsa            #+#    #+#              #
#    Updated: 2019/09/16 21:00:46 by ecelsa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c ft_memset.c ft_bzero.c ft_memcpy.c ft_tolower.c ft_toupper.c ft_memmove.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
