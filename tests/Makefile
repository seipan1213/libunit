# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 20:09:50 by tishigak          #+#    #+#              #
#    Updated: 2021/05/11 18:16:57 by tishigak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME           = test.out
CC             = gcc
CFLAGS         = -Wall -Werror -Wextra

FRAMEWORK_DIR  = ../framework
FRAMEWORK_LIB  = ${FRAMEWORK_DIR}/libunit.a

STRLEN_TESTS   = ./strlen/00_launcher.c ./strlen/01_basic_test.c ./strlen/02_ko_test.c \
                ./strlen/03_segv_test.c ./strlen/04_bus_err_test.c ./strlen/05_empty_test.c\
								./strlen/06_not_ascii_test.c ./strlen/07_nullbyte_test.c ./strlen/08_numeric_test.c \
								./strlen/09_nonprintable_test.c ./strlen/10_bigsize_test.c ./strlen/11_timeout_test.c \
								./strlen/12_abort_test.c ./strlen/13_zero_div_test.c ./strlen/14_one_test.c ./strlen/15_comb_test.c
ATOI_TESTS     = ./atoi/00_launcher.c ./atoi/01_basic_test.c ./atoi/02_zero_test.c ./atoi/03_minus_test.c ./atoi/04_max_test.c ./atoi/05_min_test.c

SRCS           = main.c ${STRLEN_TESTS} ${ATOI_TESTS}
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

$(NAME): $(OBJS)
	$(MAKE) -C $(FRAMEWORK_DIR)
	$(CC) $(OBJS) $(FRAMEWORK_LIB) -o $(NAME) $(CFLAGS)

.PHONY:	all clean fclean re test
