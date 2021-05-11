# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 20:09:50 by tishigak          #+#    #+#              #
#    Updated: 2021/05/11 17:14:12 by tishigak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME           = test.out
CC             = gcc
CFLAGS         = -Wall -Werror -Wextra

FRAMEWORK_DIR  = ../framework
FRAMEWORK_LIB  = ${FRAMEWORK_DIR}/libunit.a

STRLEN_TESTS   = ./strlen/00_lancher.c ./strlen/01_basic_test.c ./strlen/02_ko_test.c \
                ./strlen/03_segv_test.c ./strlen/04_bus_err_test.c ./strlen/05_empty_test.c\
								./strlen/06_not_ascii_test.c ./strlen/07_nullbyte_test.c ./strlen/08_numeric_test.c \
								./strlen/09_nonprintable_test.c ./strlen/10_bigsize_test.c ./strlen/11_timeout_test.c \
								./strlen/12_abort_test.c ./strlen/13_zero_div_test.c ./strlen/14_one_test.c ./strlen/15_comb_test.c
SRCS           = main.c ${STRLEN_TESTS}
OBJS           = $(SRCS:.c=.o)

all:	$(NAME)

test: all
	./${NAME}

%.o:	%.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	$(MAKE) -C $(FRAMEWORK_DIR) clean
	rm -f $(OBJS)

fclean:	clean
	$(MAKE) -C $(FRAMEWORK_DIR) fclean
	rm -f $(NAME)

re:	fclean all

$(FRAMEWORK_LIB):
	$(MAKE) -C $(FRAMEWORK_DIR)

$(NAME): $(OBJS) $(FRAMEWORK_LIB)
	$(CC) $(OBJS) $(FRAMEWORK_LIB) -o $(NAME) $(CFLAGS)

.PHONY:	all clean fclean re test
