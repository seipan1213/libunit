# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/09 20:09:50 by tishigak          #+#    #+#              #
#    Updated: 2021/05/10 16:20:41 by tishigak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME						= test.out
CC							= gcc
CFLAGS					= -Wall -Werror -Wextra

FRAMEWORK_DIR		= ../framework
FRAMEWORK_LIB		= ./../framework/libunit.a

REALTEST_DIR		= ../libft
REALTEST_LIB		= ../libft/libft.a

STRLCAT_TESTS		= ./strlcat/00_lancher.c ./strlcat/01_basic_test.c ./strlcat/02_ko_test.c \
									./strlcat/03_segv_fault_test.c ./strlcat/04_bus_err_test.c
SRCS						= main.c ${STRLCAT_TESTS}
OBJS						= $(SRCS:.c=.o)

all:	$(NAME)

test: all
	./${NAME}

%.o:	%.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	cd ${FRAMEWORK_DIR} && make clean
	cd ${REALTEST_DIR} && make clean
	rm -f $(OBJS)

fclean:	clean
	cd ${FRAMEWORK_DIR} && make fclean
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
