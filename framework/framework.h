/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehattor <sehattor@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:50:55 by sehattor          #+#    #+#             */
/*   Updated: 2021/05/12 15:23:23 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAMEWORK_H
# define FRAMEWORK_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <sys/wait.h>
# include "../libft/libft.h"

# ifndef SIGBUS
#  define SIGBUS 10
# endif
# ifndef SIGALRM
#  define SIGALRM 14
# endif
# ifndef SIGKILL
#  define SIGKILL 9
# endif

int		g_fw_child_pid;
FILE	*g_fp;

typedef struct s_unit_test
{
	char				*name;
	struct s_unit_test	*next;
	int					(*func)(void);
}		t_unit_test;

void			load_test(t_unit_test **lst, char *name, int (*func)(void));
t_unit_test		*create_unit(char *name, int (*func)(void));
void			addb_unit(t_unit_test **lst, t_unit_test *unit);
int				launch_tests(t_unit_test **lst);
void			exit_func(void);
void			print_start(void);
void			print_end(void);
void			print_funcname(char *func_name);
void			print_result(int success, int checked);
void			print_report(int test_num, char *test_name, int status);

#endif
