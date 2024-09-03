# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achivela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 16:42:31 by achivela          #+#    #+#              #
#    Updated: 2024/05/24 16:42:40 by achivela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

src = ./src/ft_printf.c \
	./src/ft_printf_display.c \
	./src/ft_printf_hex.c \

obj = *.o

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(src) -I ./
	ar rc $(NAME) $(obj)

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME);

re: fclean all
