# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 20:09:50 by tishigak          #+#    #+#              #
#    Updated: 2021/05/11 12:39:21 by tishigak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME						= test.out
CC							= gcc
CFLAGS					= -Wall -Werror -Wextra

FRAMEWORK_DIR		= ../framework
FRAMEWORK_LIB		= ./../framework/libunit.a

REALTEST_DIR		= ../libft
REALTEST_LIB		= ../libft/libft.a

STRLEN_TESTS		= ./strlen/00_lancher.c ./strlen/01_basic_test.c ./strlen/02_ko_test.c \
									./strlen/03_segv_fault_test.c ./strlen/04_bus_err_test.c
SRCS						= main.c ${STRLEN_TESTS}
OBJS						= $(SRCS:.c=.o)

all:	$(NAME)

test: all
	./${NAME}

%.o:	%.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	cd ${REALTEST_DIR} && make clean
	rm -f $(OBJS)

fclean:	clean
	cd ${REALTEST_DIR} && make fclean
	rm -f $(NAME)

re:	fclean all

$(FRAMEWORK_LIB):
	cd ${FRAMEWORK_DIR} && make all

${REALTEST_LIB}:
	cd ${REALTEST_DIR} && make all

$(NAME): $(OBJS) ${REALTEST_LIB} $(FRAMEWORK_LIB)
	$(CC) $(OBJS) $(FRAMEWORK_LIB) ${REALTEST_LIB} -o $(NAME) $(CFLAGS)

.PHONY:	all clean fclean re test
