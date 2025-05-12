# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 10:06:36 by ktombola          #+#    #+#              #
#    Updated: 2025/05/09 10:06:41 by ktombola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a
CC				= cc
CFLAGS			= -Wall -Wextra -Werror -I.
RM				= rm -f

SRCS			=	ft_printf.c \
					printers/ft_putchar.c printers/ft_puthex.c \
					printers/ft_putnbr.c printers/ft_print_address.c \
					printers/ft_putstr.c printers/ft_putunsign_int.c \
					helper/ft_safeadd.c

OBJS			= $(SRCS:.c=.o)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME) $(TESTS_BIN)

re:			fclean all

.PHONY:			all clean fclean re

TESTS_SRC = tests/main.c
TESTS_BIN = test_ft_printf

test: $(NAME)
	$(CC) $(CFLAGS) $(TESTS_SRC) $(NAME) -o $(TESTS_BIN)
	./$(TESTS_BIN)

.PHONY: test
