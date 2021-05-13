# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sehattor <sehattor@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 23:29:07 by sehattor          #+#    #+#              #
#    Updated: 2021/05/12 15:20:58 by tishigak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = launch_tests.c load_test.c output.c
OBJS = $(SRCS:.c=.o)

CC	= gcc
ARFLAGS = rcs
CFLAGS = -Wall -Wextra -Werror -I.
NAME = libunit.a
LIBFT_DIR = ../libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_LIB) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
