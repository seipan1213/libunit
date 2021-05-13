# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 20:09:50 by tishigak          #+#    #+#              #
#    Updated: 2021/05/12 19:51:44 by tishigak         ###   ########.fr        #
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
ATOI_TESTS     = ./atoi/00_launcher.c ./atoi/01_basic_test.c ./atoi/02_zero_test.c ./atoi/03_minus_test.c ./atoi/04_max_test.c \
		./atoi/05_min_test.c ./atoi/06_longmax_test.c ./atoi/07_longmin_test.c ./atoi/08_longover_test.c \
		./atoi/09_longunder_test.c ./atoi/10_sign_test.c ./atoi/11_atoi_space_test.c ./atoi/12_atoi_comb_test.c \
		./atoi/13_atoi_notnum_test.c ./atoi/14_atoi_notnum2_test.c ./atoi/15_atoi_empty_test.c
STRNSTR_TESTS  = ./strnstr/00_launcher.c ./strnstr/01_basic1_test.c ./strnstr/02_basic2_test.c ./strnstr/03_basic3_test.c \
		./strnstr/04_empty1_test.c ./strnstr/05_empty2_test.c ./strnstr/06_not_found1_test.c ./strnstr/07_not_found2_test.c \
		./strnstr/08_not_segv_test.c ./strnstr/09_not_search_test.c

SRCS           = main.c ${STRLEN_TESTS} ${ATOI_TESTS} ${STRNSTR_TESTS}
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
