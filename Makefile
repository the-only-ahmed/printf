# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/23 08:43:54 by ael-kadh          #+#    #+#              #
#    Updated: 2013/12/16 00:04:11 by ael-kadh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_itoa.c ft_strdup.c ft_strlen.c \
	  ft_printf.c ft_strjoin.c ft_atoi.c ft_uputnbr.c ft_pointer.c\
	  ft_uput2long.c ft_point.c ft_isascii.c ft_printf_2.c ft_printf_3.c
HEAD = libftprintf.h
OBJ = $(SRC:.c=.o) $(HEAD).gch
FLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) :
		@gcc $(FLAGS) $(HEAD) -c $(SRC) 
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

clean :
		@rm -f $(OBJ)

fclean : clean
		@rm -f $(NAME)

re : fclean all
