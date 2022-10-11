# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 17:25:19 by ktunchar          #+#    #+#              #
#    Updated: 2022/10/11 22:56:33 by ktunchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar_count.c ft_putnbr_d_count.c ft_putnbr_o_count.c ft_putnbr_ux_count.c ft_putnbr_x_count.c

OBJS := $(SRCS:.c=.o)

BONUS	= 

BONUS_OBJS = $(BONUS:%.c=%.o)

all: $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)
$(NAME): $(OBJS) $(BONUS_OBJS)
	ar -rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all clean

bonus:	$(OBJS) $(BONUS_OBJS)
		ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

unit :
	(cd ./libft-unit-test && make f)
test : unit fclean

.PHONY: clean fclean all re bonus
